import java.util.*;
class adjMatrix{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter number of vertices");
        int V = sc.nextInt();
        System.out.println("Enter number of Edges");
        int E = sc.nextInt();

        // For un-directed graph... // 0 --- based vertex   for 1 based vertex intialize the array of size V+1.
        int unDirectedAdjMatrix[][] = new int[V][V];

        // For directed graph....
        // 0 --- based vertex   for 1 based vertex intialize the array of size V+1.
        int directedGraphAdjMatrix[][] = new int[V][V];


        for(int i=0; i<E; i++){
            int u,v;
            u = sc.nextInt();
            v = sc.nextInt();

            // Un-directed graph...
            unDirectedAdjMatrix[u][v] = 1;
            unDirectedAdjMatrix[v][u] = 1;

            // Directed graph...
            directedGraphAdjMatrix[u][v] = 1;
        }

        for(int arr[]:unDirectedAdjMatrix){
            for(int k:arr){
                System.out.print(k + " ");
            }System.out.println();
        }

        System.out.println("++++++++++++++");
        
        for(int arr[]:directedGraphAdjMatrix){
            for(int k:arr){
                System.out.print(k + " ");
            }System.out.println();
        }
    }
}