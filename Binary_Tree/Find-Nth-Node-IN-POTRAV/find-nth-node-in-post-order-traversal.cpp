//C++ program to find the the nth node in Post Order Traversal

#include<bits/stdc++.h>
using namespace std;


struct Node
{
    int data;
    Node *left;
    Node *right;
};

//Create new node
struct Node* createNode(int item)
{
    Node *temp = new Node;
    temp->data = item;
    temp->left = NULL;
    temp->right = NULL;

    return temp;
}

//function to find nth node
void NthNode(struct Node* root, int N)
{
    int flag = 0;

    if (root = NULL)
    {
        return;

    }
    if (flag<=N)
    {
        //left recursion
        NthNode(root->left, N);


        //right recursion
        NthNode(root->right, N);

        flag++;

        if (flag==N)
        {
            cout << root->data;
        }
    }
}




int main(int argc, char const *argv[])
{
    struct Node *root = createNode(12);

    root->left = createNode(34);
    root->left->left = createNode(21);
    root->left->right = createNode(2);

    root->right = createNode(3);
    root->right->left = createNode(101);
    root->right->right = createNode(5);

    int N= 101;
    NthNode(root, N);


    return 0;
}

