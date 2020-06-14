//C++ program to make a simple binary tree

#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *left;
    node *right;
};

struct node* newNode(int data)
{
    struct node *bnode = new node();

    bnode->data = data;

    bnode->left = NULL;
    bnode->right = NULL;

    return (bnode);
}

int main(int argc, char const *argv[])
{
    struct node *root = newNode(1);
    /* following is the tree after above statement  
  
        1 
      /   \ 
     NULL  NULL   
  */

    root->left = newNode(2);

    root->left = newNode(3);
    /* 2 and 3 become left and right children of 1 
           1 
         /   \ 
        2      3 
     /    \    /  \ 
    NULL NULL NULL NULL 
  */

    root->left->left = newNode(4);
    /* 4 becomes left child of 2 
           1 
       /       \ 
      2          3 
    /   \       /  \ 
   4    NULL  NULL  NULL 
  /  \ 
NULL NULL 
*/


    return 0;
}
