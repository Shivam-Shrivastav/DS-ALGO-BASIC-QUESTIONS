//C++ program to perform insertion operation on 

#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};

//For new node allocation.
struct Node *newNode(int x)
{   
    //This will make a dynamic memory in Heap and points the temp pointer to it.[The pointer of data type struct Node]
    struct Node *temp = new Node();


    //By making the pointer temp of data type struct Node we able to access its public section like int data,left and right pointers.
    temp->data = x;
    temp->left = temp->right = NULL;

    return temp;
}

//Function for inroder traversal of the binary search tree
void InorderTraversal(Node *root)
{

    if (root!=NULL){

        InorderTraversal(root->left);
        cout << root->data << " ";
        InorderTraversal(root->right);
    }

}

//Function for insertion
struct Node* Insert(Node *root, int key)
{
    if (root==NULL)
    {
        return newNode(key);
    }

    if (root->data>key)
    {
        root->left = Insert(root->left, key);
    }
    else if (root->data < key)
    {
        root->right = Insert(root-> right, key);
    }

    return root;
}

int main() 
{ 
    /* Let us create following BST 
              50 
           /     \ 
          30      70 
         /  \    /  \ 
       20   40  60   80 */
    struct Node *root = NULL; 
    root = Insert(root, 50); 
    Insert(root, 30); 
    Insert(root, 20); 
    Insert(root, 40); 
    Insert(root, 70); 
    Insert(root, 60); 
    Insert(root, 80); 
   
    // print inoder traversal of the BST 
    InorderTraversal(root); 
   
    return 0; 
} 