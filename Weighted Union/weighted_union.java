// Weighted Quick Union
package Algorithms.Java;

class Weight{
    public static int root(int[] arr,int id){
        while(arr[id]!=id){
            arr[id] = arr[arr[id]]; //flatten the tree
            id = arr[id];
        }
        return id;
    }

    public static boolean connected(int[] arr, int id1, int id2){
        return root(arr,id1)==root(arr,id2);
    }

    public static void union(int[] sz, int[] arr, int id1, int id2){
        int i1 = root(arr,id1);
        int i2 = root(arr,id2);
        if(i1!=i2){
            if(sz[i1]<sz[i2]){
                arr[i1]=i2;
                sz[i2]+=sz[i1];
            }
            else{
                arr[i2]=i1;
                sz[i1]+=sz[i2];
            }
        }     
    }

    public static void main(String[]args){
        int[] id = {0,1,2,3,4,5,6,7,8,9};
        int[] size = {1,1,1,1,1,1,1,1,1,1};
        union(size, id, 4, 3);
        union(size, id, 3, 8);
        union(size, id, 6, 5);
        union(size, id, 9, 4);
        union(size, id, 2, 1);
        union(size, id, 5, 0);
        union(size, id, 7, 2);
        union(size, id, 6, 1);
        union(size, id, 7, 3);
        System.out.println(connected(id, 1, 9));
    }
}