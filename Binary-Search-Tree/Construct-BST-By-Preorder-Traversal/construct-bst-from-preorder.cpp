//C++ program to construct a binary tree from preorder traversal array.


/* 
    * In preorder traversal array we know that the first element is root of the binary search tree.
    * So to construct a binary tree we will first check whether the key i.e first element of the preorder traversal array is in
    * between INT_MIN and INT_MAX.
    * Then to construct a left subtree we will check wheather the number in the element of preorder traversal
    * array is in between INT_MIN and key, then we will put these in the left subtree.
    * Then to construct a right subtree we will check wheather the number in the element of preorder traversal
    * array is in between key and INT_MAX, then we will put these in the right subtree.

*/


#include<bits/stdc++.h>
using namespace std;

class TreeNode
{
    public:
        int data;
        TreeNode *left;
        TreeNode *right;
};


TreeNode *newNode(int x)
{
    TreeNode *temp = new TreeNode();

    temp->data = x;
    temp->left = NULL;
    temp->right = NULL;

    return temp;
}



TreeNode *constructUtil(int pre[], int *preIndex, int key, int min, int max,int size)
{
    //Boundary Case
    if (*preIndex>=size)
    {
        return NULL;

    }
    TreeNode *root = NULL;
    if (key > min && key < max)
    {
        root = newNode(key);
        *preIndex += 1;
        if (*preIndex<size)
        {
            //Make the left subtree for the value between min and key
            root->left = constructUtil(pre, preIndex, pre[*preIndex], min, key, size);


            //Make the left subtree for the value between min and key
            root->right = constructUtil(pre, preIndex, pre[*preIndex],key,max, size);
        }
    }

    return root;

}

TreeNode *constructTree(int pre[],int size)
{
    int preIndex = 0;
    return constructUtil(pre, &preIndex,pre[0],INT_MIN, INT_MAX, size);
}

void printInorder(TreeNode *root)
{

    if (root==NULL){
        return;
    }
        printInorder(root->left);
        cout << root->data << " ";
        printInorder(root->right);

}

int main(int argc, char const *argv[])
{
    int pre[] = {10, 5, 1, 7, 40, 50};
    int size = sizeof(pre) / sizeof(pre[0]);

    TreeNode *root = constructTree(pre, size);

    cout << "Inorder Traversal of BST:\n";
    printInorder(root);



    return 0;
}
