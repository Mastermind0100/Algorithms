// Quick Find Method - Eager Algorithm
package Algorithms.Java;
class Eager{
    public static void union(int[] arr, int id1, int id2) {
        if (arr[id1] != arr[id2]) {
            for (int i = 0; i < 10; i++) {
                if (arr[i] == arr[id1]) {
                    arr[i] = arr[id2];
                }
            }
        }
    }

    public static boolean connected(int[] arr, int id1, int id2) {
        if (arr[id1] == arr[id2]) {
            return true;
        } else {
            return false;
        }
    }

    public static void main(String[] args) {
        int[] id = new int[] { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
        union(id, 4, 9); //You can add any number of Union Paths Here
        union(id, 9, 0);
        union(id, 6, 4);
        union(id, 1, 8);
        union(id, 1, 4);
        boolean val = connected(id, 9, 6); //You can check any two points for connection
        System.out.println(val);
    }
}