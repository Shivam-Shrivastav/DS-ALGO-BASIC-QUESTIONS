//C++ program to traverse the binary tree
#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *left;
    Node *right;
    Node(int x)
    {
        data = x;
        left = right = NULL;
    }
};

void preorder(Node* temp)
{
    if (temp==NULL)
    {
        return;
    }

    cout << temp->data << " ";
    preorder(temp->left);
    preorder(temp->right);
}

void inorder(Node* temp)
{
    if (temp==NULL)
    {
        return;
    }
    inorder(temp->left);
    cout << temp->data << " ";
    inorder(temp->right);
}

void postorder(Node* temp)
{
    if (temp==NULL)
    {
        return;
    }
    postorder(temp->left);
    postorder(temp->right);
    cout << temp->data << " ";
}

int main(int argc, char const *argv[])
{
    Node *root = new Node(12);

    root->left=new Node(14);
    root->left->left=new Node(56);
    root->left->right = new Node(67);

    root->right=new Node(4);
    root->right->left=new Node(5);
    root->right->right = new Node(97);

    cout << "Preorder Traversal :";
    preorder(root);
    cout << endl;

    cout << "Inorder Traversal :";
    inorder(root);
    cout << endl;

    cout << "Postorder Traversal :";
    postorder(root);
    cout << endl;

    return 0;
}
