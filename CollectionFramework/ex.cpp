#include <iostream>
#include <queue>
#include <bits/stdc++.h>

struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int val) : data(val), left(nullptr), right(nullptr) {}
};

// Function to perform alternating level order traversal and communication
void alternateCommunication(Node* root) {
    if (!root)
        return;

    bool leftToRight = true;

    std::deque<Node*> q;  // Using deque for efficient popping from both ends
    q.push_back(root);

    while (!q.empty()) {
        int levelSize = q.size();

        if (leftToRight) {
            // Communicate with the most senior employee (leftmost node of the level)
            std::cout << "Communicating with senior employee: " << q.front()->data << std::endl;
        } else {
            // Communicate with the junior employee (rightmost node of the level)
            std::cout << "Communicating with junior employee: " << q.back()->data << std::endl;
        }

        // Process the current level nodes and update the queue
        for (int i = 0; i < levelSize; ++i) {
            if (leftToRight) {
                Node* curr = q.front();
                q.pop_front();
                if (curr->left)
                    q.push_back(curr->left);
                if (curr->right)
                    q.push_back(curr->right);
            } else {
                Node* curr = q.back();
                q.pop_back();
                if (curr->right)
                    q.push_front(curr->right);
                if (curr->left)
                    q.push_front(curr->left);
            }
        }

        // Toggle the direction for the next level
        leftToRight = !leftToRight;
    }
}

int main() {
    // Construct the binary tree structure
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->right->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    root->left->left->left = new Node(8);
    root->left->left->right = new Node(9);
    root->left->right->left = new Node(10);
    root->left->right->left = new Node(11);
    root->right->left->left = new Node(12);
    root->right->left->right = new Node(13);
    root->right->right->left = new Node(14);
    root->right->right->right = new Node(15);

    // Perform alternating communication
    alternateCommunication(root);

    // Clean up memory (not shown for brevity)

    return 0;
}
