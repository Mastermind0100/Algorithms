#include<iostream>
using namespace std;

int root(int arr[], int id)
{
    while(arr[id]!=id)
    {
        id = arr[id];
    }
    return id;
}

void unioN(int arr[], int id1, int id2)
{
    int i = root(arr,id1);
    int j = root(arr,id2);
    arr[i] = j;
}

bool connected(int arr[], int id1, int id2)
{
    return root(arr, id1)==root(arr, id2);
}

int main()
{
    int id[] = {0,1,2,3,4,5,6,7,8,9};
    unioN(id, 2, 6);
    unioN(id, 3, 2);
    unioN(id, 1, 6);
    unioN(id, 7, 9);
    unioN(id, 0, 7);
    unioN(id, 8, 9);
    unioN(id, 3, 7);
    cout<<connected(id, 6, 9);
}