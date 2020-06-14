//C++ program for level order transversal of a binary tree

#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *left;
    node *right;
    node (int x) 
    { 
     data = x; 
     left = right = NULL; 
    }
};
void traverse(node* temp)
{
    queue<node* > q;
    q.push(temp);

    while (!q.empty())
    {
        node* current = q.front();
        cout<<current->data<<" ";
        if (current->left!=NULL)
        {
            q.push(current->left);
        }
        if (current->right!=NULL)
        {
            q.push(current->right);
        }
        q.pop();//Remove element at first.
        
    }

}

int main(int argc, char const *argv[])
{
    node* root = new node(12);
    root->left = new node(11);
    root->left->left = new node(8);
    root->right= new node(14);
    root->right->right = new node(18);
    root->right->left = new node(13);

    traverse(root);

    return 0;
}
