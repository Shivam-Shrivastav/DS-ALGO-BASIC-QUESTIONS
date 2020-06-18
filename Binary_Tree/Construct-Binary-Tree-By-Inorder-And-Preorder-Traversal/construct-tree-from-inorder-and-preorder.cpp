//C++ program to construct a tree from inorder and preorder traversal array

#include<bits/stdc++.h>
using namespace std;

struct Node
{
    char data;
    Node *left;
    Node *right;
};

int search(char arr[],char x,int s,int e)//search root of preorder in inorter and return index of the tnorder
{
    int i;
    for ( i = s; i <= e; i++)
    {
        if (arr[i]==x)
        {
            return i;
        }
    }
    return -1;
}

Node* newNode(char data);//prototype for utility function



Node* buildTree(char in[], char pre[], int start, int end)
{
    static int preIndex = 0;

    if (start>end)
    {
        return NULL;
    }

    Node *tnode = newNode(pre[preIndex++]);

    if (start==end)
    {
        return tnode;
    }

    int Index = search(in, tnode->data, start, end);

    tnode->left = buildTree(in, pre, start, Index - 1);
    tnode->right = buildTree(in, pre, Index + 1, end);

    return tnode;

}





//UTILITY FUNCTIONS

Node* newNode(char x)
{
    Node *temp = new Node();
    temp->data = x;
    temp->left = NULL;
    temp->right = NULL;

    return (temp);

}

void printInorderNode(Node* root)
{
    if (root==NULL)
    {
        return;
    }

    printInorderNode(root->left);

    cout<<root->data<<" ";

    printInorderNode(root->right);


}
int main(int argc, char const *argv[])
{
    char pre[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G'};
    char in[] = {'C', 'B', 'D', 'A', 'F', 'E', 'G'};
    int len = sizeof(in)/sizeof(in[0]);
    int start = 0;

    Node *root = buildTree(in, pre, start, len - 1);

    cout << "Constructed Binary Tree in Inorder Traversal is : ";
    printInorderNode(root);

    return 0;
}
