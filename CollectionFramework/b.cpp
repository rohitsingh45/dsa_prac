#include <bits/stdc++.h>

struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};

// Function to insert a node at the end of the linked list
void insert(Node*& head, int val) {
    Node* newNode = new Node(val);
    if (!head) {
        head = newNode;
    } else {
        Node* current = head;
        while (current->next) {
            current = current->next;
        }
        current->next = newNode;
    }
}

// Function to print the linked list
void printList(Node* head) {
    Node* current = head;
    while (current) {
        std::cout << current->data << " ";
        current = current->next;
    }
    std::cout << std::endl;
}

// Function to simplify the linked list by removing consecutive sequences summing to zero
void simplifyList(Node*& head) {
    Node* current = head;
    
    while (current) {
        int sum = 0;
        Node* temp = current;

        // Calculate the sum of the current consecutive sequence
        while (temp) {
            sum += temp->data;
            if (sum == 0) {
                break;
            }
            temp = temp->next;
        }

        // If sum is zero, remove the sequence by updating the pointers
        if (sum == 0) {
            temp = current;
            while (temp != current->next) {
                Node* toDelete = temp;
                temp = temp->next;
                delete toDelete;
            }
            current = temp;
        } else {
            current = current->next;
        }
    }
}

int main() {
    Node* head = nullptr;
    
    // Example input: [1,2,-3,3,1]
    insert(head, 1);
    insert(head, 2);
    insert(head, -3);
    insert(head, 3);
    insert(head, 1);

    std::cout << "Original List: ";
    printList(head);

    // Simplify the linked list
    simplifyList(head);

    std::cout << "Simplified List: ";
    printList(head);

    // Clean up memory (not shown for brevity)

    return 0;
}
