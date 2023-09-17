import java.util.ArrayList;
import java.util.Arrays;
import java.util.Scanner;

public class dfsTraversal {
	
	public void dfsHelper(int src, boolean vis[], int adj[][], ArrayList<Integer> ans) {
		vis[src] = true;
		ans.add(src);
		for(int i=0; i<adj.length; i++) {
			if(adj[src][i] == 1 && !vis[i]) {
				dfsHelper(i, vis, adj, ans);
			}
		}
	}
	
	public ArrayList<Integer> dfsTraversalMethod(int adj[][]){
		ArrayList<Integer> ans = new ArrayList<>();
		boolean vis[] = new boolean[adj.length];
		Arrays.fill(vis, false);
		
		for(int i=0; i<adj.length; i++) {
			if(!vis[i]) {
				dfsHelper(i,vis,adj,ans);
			}
		}
		
		return ans;	
	}
	
	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		
		System.out.println("Is graph directed");
		boolean directed = scan.nextBoolean();
		
		System.out.println("Enter number of vertices");
		int V = scan.nextInt();
		
		System.out.println("Enter number of edges");
		int E = scan.nextInt();
		
		int adjMatrix[][] = new int[V][V];
		
		for(int i=0; i<E; i++) {
			int src = scan.nextInt();
			int dest = scan.nextInt();
			
			adjMatrix[src][dest] = 1;
			if(!directed)
				adjMatrix[dest][src] = 1;
		}
		dfsTraversal dfs = new dfsTraversal();
		ArrayList<Integer> arrayList = dfs.dfsTraversalMethod(adjMatrix);
		for(int i:arrayList)
			System.out.print(i + " ");
		
		scan.close();
	}

}
