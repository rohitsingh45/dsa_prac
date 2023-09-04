import java.util.*;

class adjListWeighted{

    static class Node{
        int dest;
        int weight;

        Node(int dest, int weight){
            this.dest = dest;
            this.weight = weight;
        }
    }

    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter number of vertex");
        int V;
        V = sc.nextInt();
        System.out.println("Enter number of edges");
        int E = sc.nextInt();

        ArrayList< ArrayList<Node> > adjList = new ArrayList<>();

        for(int i=0; i<V; i++){
            adjList.add(new ArrayList<Node>());
        }

        for(int i=0; i<E; i++){
            int u,v,w;
            u = sc.nextInt();
            v = sc.nextInt();
            w = sc.nextInt();

            // Adding edges...
            adjList.get(u).add(new Node(v,w));
            adjList.get(v).add(new Node(u,w));
        }

        for(int i=0; i<adjList.size(); i++){
            System.out.print(i + "->");
            for(Node arn:adjList.get(i)){
                System.out.print("("+arn.dest + " " + arn.weight + ") ");
            }System.out.println();

        }
    }
}