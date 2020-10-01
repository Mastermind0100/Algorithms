#include <iostream>
using namespace std;
int maxval(int a,int b)
{
    if(a>b)
        return a;
    else
        return b;
}
int main()
{
    int num,W;
    cout<<"Enter the number of different denominations: ";
    cin>>num;
    int val[num],wt[num];
    cout<<"Enter the values : ";
    for(int i=0;i<num;++i)
    {
        cin>>val[i];
    }
    cout<<"Enter the weights : ";
    for(int i=0;i<num;++i)
    {
        cin>>wt[i];
    }
    cout<<"Enter Max Weight of the Knapsack : ";
    cin>>W;
    int k[num][W+1];
    for(int i=0;i<num;i++)
    {
        for(int j=0;j<=W;j++)
        {
            if(i==0 || j==0)
            {
                k[i][j]=0;
            }
            else if(wt[i]<=j)
            {
                k[i][j]=maxval(val[i]+k[i-1][j-wt[i]],k[i-1][j]);
            }
            else
            {
                k[i][j]=k[i-1][j];
            }
        }
    }
    cout<<"Optimized Loot : "<<k[num-1][W]<<endl;
    cout<<"Order of Selection of items : ";
    int r=num-1,c=W,rob[num];
    while(r>=0 && c>=0)
    {
        if(k[r][c]==k[r-1][c])
        {
            rob[num-r-1]=0;
            r--;
        }
        else
        {
            rob[num-r-1]=1;
            c=c-wt[r];
            r--;
        }
    }
    rob[num-1]=0;
    for(int i=0;i<num;i++)
    {
        cout<<rob[num-i-1]<<" ";
    }
    return 0;
}
