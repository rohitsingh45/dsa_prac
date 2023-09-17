import java.util.ArrayList;
import java.util.Arrays;
import java.util.LinkedList;
import java.util.Queue;
import java.util.Scanner;

public class bfsTraversal {
	
	public ArrayList<Integer> bfsTraversalMethod(int adj[][]) {
		ArrayList<Integer> ans = new ArrayList<>();
		
		boolean vis[] = new boolean[adj.length];
		Arrays.fill(vis, false);
		
		// Loop is not mandatory at all if there are not diconnected component in the graph...
		for(int i=0; i<adj.length; i++) {
			if(!vis[i]) {
				Queue<Integer> queue = new LinkedList<>();
				queue.add(i);
				vis[i] = true;
				
				while(!queue.isEmpty()) {
					int front = queue.poll();
					ans.add(front);
					
					for(int j=0; j<adj.length; j++) {
						if(adj[front][j] == 1 && !vis[j]) {
							vis[j] = true;
							queue.add(j);
						}
					}
				}
			}
		}
		
		return ans;
	}
	
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		
		System.out.println("Is graph directed");
		boolean directed = scanner.nextBoolean();
		
		System.out.println("Enter number of vertices");
		int V = scanner.nextInt();
		
		int adjMatrix[][] = new int[V][V];
		
		System.out.println("Enter number of edges");
		int E = scanner.nextInt();
		
		for(int i=0; i<E; i++) {
			int src = scanner.nextInt();
			int dest = scanner.nextInt();
			
			adjMatrix[src][dest] = 1;
			if(!directed) adjMatrix[dest][src] = 1;
		}
		bfsTraversal o1 = new bfsTraversal();
		ArrayList<Integer> arrayList = o1.bfsTraversalMethod(adjMatrix);
		for(int i:arrayList) System.out.print(i + " ");
		
		scanner.close();
	}
}
