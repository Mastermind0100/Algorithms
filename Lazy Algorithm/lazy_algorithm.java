package Algorithms.Java;

class Lazy{
    public static int root(int[] arr, int i){
        while(arr[i]!=i){
            i = arr[i];
        }
        return i;
    }

    public static void union(int[] arr, int id1, int id2){
        int i = root(arr,id1);
        int j = root(arr,id2);
        arr[i] = j;
    }

    public static boolean connected(int[] arr, int id1, int id2){
        return root(arr, id1)==root(arr, id2);
    }

    public static void main(String[]args){
        int []id = {0,1,6,2,4,5,6,7,8,9};
        union(id, 2, 6);
        union(id, 3, 2);
        union(id, 1, 6);
        union(id, 7, 9);
        union(id, 0, 7);
        union(id, 8, 9);
        union(id, 3, 7);
        System.out.println(connected(id, 6, 9));   
    }
}