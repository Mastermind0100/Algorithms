#include<iostream>
using namespace std;

int root(int arr[], int  i)
{
    while(arr[i]!=i)
    {
        arr[i] = arr[arr[i]]; //flatten the tree
        i = arr[i];
    }
    return i;
}

bool connected(int arr[], int id1, int id2)
{
    return root(arr,id1)==root(arr,id2);
}

void unioN(int size[], int arr[], int id1, int id2)
{
    int i1 = root(arr, id1);
    int i2 = root(arr, id2);
    if(i1!=i2)
    {
        if(size[i1]<size[i2])
        {
            arr[i1]=i2;
            size[i2]+=size[i1];
        }
        else
        {
            arr[i2]=i1;
            size[i1]+=size[i2];
        }
        
    }
}

int main()
{
    int id[] = {0,1,2,3,4,5,6,7,8,9};
    int size[] = {1,1,1,1,1,1,1,1,1,1};
    unioN(size, id, 4, 3);
    unioN(size, id, 3, 8);
    unioN(size, id, 6, 5);
    unioN(size, id, 9, 4);
    unioN(size, id, 2, 1);
    unioN(size, id, 5, 0);
    unioN(size, id, 7, 2);
    unioN(size, id, 6, 1);
    unioN(size, id, 7, 3);
    cout<<connected(id, 1, 9);
}