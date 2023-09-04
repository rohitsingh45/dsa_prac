import java.util.*;

class ArrayListImplementation{

    public static void main(String[] args){
        // In collection framework if we not specify the type of wrapper object used by the 
        // data structure then it by default assume its type as object and can receive any type of object.
        
        // Example:- 
        // ArrayList arr = new ArrayList();
        // arr.add("Prince");
        // arr.add("Rohit");
        // arr.add("Rahul");
        // arr.add(45);
        // System.out.println(arr);

        // ArrayList with type.....
        ArrayList<Integer> arr = new ArrayList<Integer>();
        arr.add(45);
        arr.add(55);
        arr.add(65);
        // // arr.add("Rohan");  // It cause compile time error.
        // System.out.println(arr);

        // add(index,value):- method used to add value at specified index....
        arr.add(0,23);  // It will be first element of our array list and rest of element got shifted from their location.

        System.out.println(arr);

        System.out.println(arr.size());  // Return the size of array list...

        System.out.println(arr.get(0));  // Return the value at index 0....
        System.out.println(arr.set(0,90));  // Return the old value at index 0 and set the new specified value.....
        System.out.println(arr.get(0));

        System.out.println(arr);

        System.out.println("Iterating using iterator.....");
        // Iterating an arraylist.....
        Iterator itr =  arr.iterator();
        while(itr.hasNext()){
            System.out.println(itr.next());
        }

        System.out.println("Iterating using for-each loop.....");
        // Iterating using for-each loop.....
        for(Integer it:arr){
            System.out.println(it);
        }

        System.out.println("Iterating using ListIterator (Sub-interface of Iterator).....");
        // It provides functionality to traverse in backward and forward both direction.....
        // Only used for list classes and interfaces.....
        ListIterator li = arr.listIterator();
        while(li.hasNext()){
            System.out.print(li.next() + " ");
        }System.out.println();


        System.out.println("Iterating using for-each method.....");
        // New feature similar to for-each of javascript.....
        arr.forEach(a->{
            System.out.print(a + " ");
        });
        System.out.println();

        System.out.println("Iterating using for-each remaining method.....");
        // New feature similar to for-each-remaining of javascript.....
        Iterator itr2 = arr.iterator();
        itr2.forEachRemaining(a->{
            System.out.print(a + " ");
        });
        System.out.println();


        
        

        // Sorting an arraylist......
        Collections.sort(arr);   
        // Collections is a built-in class of collection interface it has a static method named sort() used to sort the data structures.
        System.out.println(arr);




    }
}