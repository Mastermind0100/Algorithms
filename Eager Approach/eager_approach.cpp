#include<iostream>
using namespace std;

void unioN(int arr[], int id1, int id2)
{
    if (arr[id1] != arr[id2]) 
    {
        for (int i = 0; i < 10; i++) 
        {
            if (arr[i] == arr[id1]) 
            {
                arr[i] = arr[id2];
            }
        }
    }
}

bool connected(int arr[], int id1, int id2)
{
    if(arr[id1]==arr[id2])
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int id[] = {0,1,2,3,4,5,6,7,8,9};
    unioN(id,4,9);
    cout<<connected(id,4,8);
}