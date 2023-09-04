import java.util.*;

class adjList{

    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter number of vertices");
        int V = sc.nextInt();
        System.out.println("Enter number of edges");
        int E = sc.nextInt();

        ArrayList< ArrayList<Integer> > adjListUD = new ArrayList<>();
        for(int i=0; i<V; i++){
            adjListUD.add(new ArrayList<Integer>());
        }

        ArrayList< ArrayList<Integer> > adjListDG = new ArrayList<>();
        for(int i=0; i<V; i++){
            adjListDG.add(new ArrayList<Integer>());
        }

        for(int i=0; i<E; i++){
            int u,v;
            u = sc.nextInt();
            v = sc.nextInt();

            // For undirected graph...
            adjListUD.get(u).add(v);
            adjListUD.get(v).add(u);

            // For directed graph...
            adjListDG.get(u).add(v);
        }

        System.out.println("adjlist of un-directed graph");
        for(int i=0; i<adjListUD.size(); i++){
            System.out.println( i + "->" + adjListUD.get(i));
        }

        System.out.println("++++++++++++++++++");

        System.out.println("adjList of directed graph");
        for(int i=0; i<adjListDG.size(); i++){
            System.out.println(i + "->" + adjListDG.get(i));
        }

    }
}