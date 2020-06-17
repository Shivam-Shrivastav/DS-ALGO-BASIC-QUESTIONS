//C++ program to find the nth node in inorder traversal

#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;
};

struct Node* createNode(int item )
{
    Node* temp = new Node();

    temp->data = item;

    Node* left = NULL;
    Node* right = NULL;


    return temp;


}
void NthInorder(struct Node* temp, int n) 
{
    static int count = 0;
    if (temp==NULL)
    {
        return;
    }

    if (count<=n)
    {
        NthInorder(temp->left,n);
        count++;

        if (count==n)
        {
            /* code */
            cout << temp->data << endl;
            

            NthInorder(temp->right, n);
        }
        
        
    }
    
} 

int main(int argc, char const *argv[])
{
    struct Node *root = createNode(25);
    root->left = createNode(20); 
	root->right = createNode(30); 
	root->left->left = createNode(18); 
	root->left->right = createNode(22); 
	root->right->left = createNode(24); 
	root->right->right = createNode(32); 


    int n = 1; 
  
    NthInorder(root, n);



    return 0;
}

