//C++ program to make a level order insertion in a binary tree

//NOTE: Check out Level order transversal to before seeing this exercise code.


//In this exercise we will insert the desired value in the node whoose child node is NULL with the help of insertion function.
#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;
    Node(int x)
    {
        data=x;
        left = right = NULL;
    }
};
void traversal(Node* root)
{
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        Node *temp = q.front();
        cout << temp->data << " ";
        if (temp->left != NULL)
        {
            q.push(temp->left);
        }
        if (temp->right!=NULL)
        {
            q.push(temp->right);
        }
        q.pop();
    }
}
void insertion(Node* root, int key)
{
    queue<Node *>  q;
    q.push(root);
    while (!q.empty())
    {
        Node *temp = q.front();
        if (temp->left==NULL)
        {
            temp->left = new Node(key);
            break;
        }
        else
        {
            q.push(temp->left);
        }
        if (temp->right==NULL)
        {
            temp->right = new Node(key);
            break;
        }
        else
        {
            q.push(temp->right);
        }
        q.pop();
    }
}

int main(int argc, char const *argv[])
{
    Node *root = new Node(34);

    root->left = new Node(20);
    root->left->left = new Node(11);
    root->left->right = new Node(23);

    root->right = new Node(45);
    root->right->left = new Node(32);
    int key = 49;

    cout << "Level order traversal before insertion: ";
    traversal(root);

    cout << endl;
    insertion(root, key);

    cout << "Level order traversal after insertion: ";
    traversal(root);
    cout << endl;

    return 0;
}
