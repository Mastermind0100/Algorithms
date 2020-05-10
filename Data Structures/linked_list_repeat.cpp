#include<iostream>
#include<vector>
using namespace std;

struct Node{
    int data;
    Node* next;
};

void insert(Node** root, int data)
{
    Node* temp = new Node;
    Node* ptr;
    temp->data = data;
    temp->next = NULL;
    if(*root==NULL)*root = temp;
    else
    {
        ptr = *root;
        while(ptr->next!=NULL)
        {
            ptr = ptr->next;
        }
        ptr->next = temp;
    }
}

void repeat(Node** root)
{
    Node* ptr = *root;
    Node* ptr2;
    vector<int> repeat;
    int n = 1;
    while(ptr->next!=NULL)
    {
        n++;
        ptr=ptr->next;
    }
    ptr = *root;
    int counter = 0;
    for(int i = 1; i <= n; i++)
    {   cout<<"outer";
        ptr2 = ptr;
        int check = ptr->data;
        if(check==0)continue;
        for(int j = 1; j <= n; j++)
        {
            cout<<"inner";
            if(ptr2->data == check)
            {
                counter++;
                ptr2->data = 0;
            }
            ptr2 = ptr2->next;
        }
        if(counter>1)
        {
            repeat.push_back(check);
        }
        counter = 0;
        ptr = ptr->next;
    }
    cout<<"Number of repeating nodes: "<<repeat.size()<<endl;
    cout<<"Repeating nodes: "<<endl;
    for(int i = 0; i < repeat.size(); i++)
    {
        cout<<repeat.at(i)<<endl;
    }
}

int main()
{
    Node* root = NULL;
    insert(&root, 5);
    insert(&root, 7);
    insert(&root, 5);
    insert(&root, 1);
    insert(&root, 7);
    repeat(&root);
}