import java.util.Arrays;
import java.util.LinkedList;
import java.util.Queue;
import java.util.Scanner;

public class cycleDetection {
	
	public boolean dfsHelper(int currVertex, int adj[][], boolean vis[], boolean dfsVis[]) {
		vis[currVertex] = true;
		dfsVis[currVertex] = true;
		
		for(int i=0; i<adj[currVertex].length; i++) {
			if(adj[currVertex][i] == 1 && !vis[i]) {
				dfsHelper(i, adj, vis, dfsVis);
			}
			else if(adj[currVertex][i] == 1 && dfsVis[i]) return true;
		}
		dfsVis[currVertex] = false;
		return false;
	}
	
	public boolean dfsCycleDetectionInDirected(int adj[][]) {
		
		boolean visited[] = new boolean[adj.length];
		Arrays.fill(visited, false);
		
		boolean dfsPathVisited[] = new boolean[adj.length];
		Arrays.fill(dfsPathVisited, false);
				
		for(int i=0; i<adj.length; i++) {
			if(!visited[i]) {
				boolean status = dfsHelper(i,adj,visited,dfsPathVisited);
				if(status) return true;
			}
		}
		
		return false;
	}

	public boolean bfsCycleDetectionInDirected(int adj[][]) {
		// Calculating in-degree of each vertex...
		int indegree[] = new int[adj.length];
		for(int i=0; i<adj.length; i++) {
			int upcomingNode = 0;
			for(int j=0; j<adj.length; j++) {
				if(adj[j][i] == 1) upcomingNode++;
			}
			indegree[i] = upcomingNode;
		}
		Queue<Integer> Q = new LinkedList<>();
		for(int i=0; i<indegree.length; i++) {
			if(indegree[i]==0) Q.add(i);
		}
		int count = 0;
		while (!Q.isEmpty()) {
			int front = Q.poll();
			count++;
			
			for(int i=0; i<adj[front].length; i++) {
				if(adj[front][i] == 1) {
					indegree[i]--;
					
					if(indegree[i] == 0) Q.add(i);
				}
			}
			
		}
		
		if(count == adj.length) return false;
		else
			return true;
	}
	
		
	
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		System.out.println("Is Graph directed [True/False]");
		boolean directed = sc.nextBoolean();
		
		System.out.println("Enter number of vertices");
		int V = sc.nextInt();
		
		System.out.println("Enter number of edges");
		int E = sc.nextInt();
		
		int adjMatrix[][] = new int[V][V];
		
		System.out.println("Enter edges");
		for(int i=0; i<E; i++) {
			int src = sc.nextInt();
			int dest = sc.nextInt();
			
			adjMatrix[src][dest] = 1;
			if(!directed) adjMatrix[dest][src] = 1;
		}
		
		cycleDetection  cd = new cycleDetection();
		
		boolean isCycle;
//		isCycle = cd.dfsCycleDetectionInDirected(adjMatrix);
		
		isCycle = cd.bfsCycleDetectionInDirected(adjMatrix);
		if(isCycle)
			System.out.println("There is cycle in Graph");
		else 
			System.out.println("There is no cycle in Graph");
		
		sc.close();		
	}

}
