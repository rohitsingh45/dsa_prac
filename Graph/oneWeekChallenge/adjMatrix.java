import java.util.Scanner;

class adjMatrix{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);

        System.out.println("Is graph directed[true/false]");
        boolean directed = sc.nextBoolean();

        System.out.println("Is graph weighted[true/false]");
        boolean weighted = sc.nextBoolean();

        System.out.println("Enter number of vertices");
        int V = sc.nextInt();

        System.out.println("Enter number of edges");
        int E = sc.nextInt();

        int matrix[][] = new int[V][V];
        
        // Un-weighted graph code....
        if(!weighted) {
	        System.out.println("Enter edges values");
	        for(int i=0; i<E; i++){
	            int src = sc.nextInt();
	            int dest = sc.nextInt();
	            
	            matrix[src][dest] = 1;
	            // Two un-directed graph..
	            if(!directed)
	            matrix[dest][src] = 1;
	        }
        }
        else {  // Weighted graph code....
        	System.out.println("Enter edges values with corresponding the weight value");
        	
        	for(int i=0; i<E; i++) {
        		int src = sc.nextInt();
        		int dest = sc.nextInt();
        		int weight = sc.nextInt();
        		
        		matrix[src][dest] = weight;
        		if(!directed) {
        			matrix[dest][src] = weight;
        		}
        	}
        }

        for(int i=0; i<V; i++){
            for(int j=0; j<V; j++){
                System.out.print(matrix[i][j] + " ");
            }System.out.println();
        }
        
        sc.close();
    }
}