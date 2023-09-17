import java.util.ArrayList;
import java.util.HashMap;
import java.util.Scanner;

public class adjList {

	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		
		System.out.println("Is graph directed [true/false]");
		boolean directed = scanner.nextBoolean();
		
		System.out.println("Is weighted graph [true/false]");
		boolean weighted = scanner.nextBoolean();
		
		System.out.println("Enter number of vertices");
		int V = scanner.nextInt();
		
		System.out.println("Enter number of edges");
		int E = scanner.nextInt();
		
		if(!weighted) {
			ArrayList<ArrayList<Integer>> adjList = new ArrayList<>(V);
			for(int i=0; i<V; i++) {
				ArrayList<Integer> arrayList = new ArrayList<>();
				adjList.add(arrayList);
			}
			System.out.println("Enter edges");
			for(int i=0; i<E; i++) {
				int src = scanner.nextInt();
				int dest = scanner.nextInt();
				
				adjList.get(src).add(dest);
				
				if(!directed) adjList.get(dest).add(src);
				
			}
			
			for(int i=0; i<adjList.size(); i++) {
				System.out.print(i + "->");
				for(int j:adjList.get(i)) {
					System.out.print(j + " ");
				}System.out.println();
			}
		}
		else {
			System.out.println("Enter the edges with corresponding weights value");
			
			HashMap<Integer, ArrayList<Pair<Integer, Integer>>> weightedAdjList = new HashMap<>();
			
			for(int i=0; i<E; i++) {
				int src = scanner.nextInt();
				int dest = scanner.nextInt();
				int weight = scanner.nextInt();
				// Source to destination....
				Pair<Integer, Integer> pair = new Pair<Integer, Integer>(dest, weight);
				ArrayList<Pair<Integer, Integer>> arrayList = new ArrayList<>();
				arrayList.add(pair);
				weightedAdjList.put(src, arrayList);
				
				if(!directed) {
					pair = new Pair<Integer, Integer>(src, weight);
					arrayList.add(pair);
					weightedAdjList.put(dest, arrayList);
				}
			}
			
			System.out.println(weightedAdjList.toString());
		}
		
		
		scanner.close();

	}

}
