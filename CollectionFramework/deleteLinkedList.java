class deleteLinkedList{

    public static void main(String[] args){
        int arr[] = {2,1,3,8};

        for(int i=arr.length-1; i>0; i--){
            if(arr[i-1] < arr[i]){
                int j = i-1;
                while(j<arr.length-1){
                    arr[j] = arr[j+1];
                    j++;
                }arr[j] = 0;
            }
        }

        for(int i:arr) System.out.print(i + " ");
    }
}