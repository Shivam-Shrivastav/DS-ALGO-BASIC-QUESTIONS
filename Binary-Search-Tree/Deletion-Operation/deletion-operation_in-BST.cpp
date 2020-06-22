//C++ program to perform deletion operation on BST

#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

};

struct Node *newNode(int x)
{
    struct Node *temp = new Node();

    temp->data = x;
    temp->left = NULL;
    temp->right = NULL;

    return temp;

}

void Inorder(struct Node *root)
{
    if (root!=NULL)
    {
        Inorder(root->left);
        cout << root->data << " ";
        Inorder(root->right);
    }
    
}

/* A utility function to insert a new node with given key in BST */
struct Node* Insert(struct Node* node, int key) 
{ 
	/* If the tree is empty, return a new node */
	if (node == NULL) return newNode(key); 

	/* Otherwise, recur down the tree */
	if (key < node->data) 
		node->left = Insert(node->left, key); 
	else
		node->right = Insert(node->right, key); 

	/* return the (unchanged) node pointer */
	return node; 
} 

/* Given a non-empty binary search tree, return the node with minimum 
key value found in that tree. Note that the entire tree does not 
need to be searched. */
struct Node *minValueNode(struct Node* node) 
{ 
	struct Node* current = node; 

	/* loop down to find the leftmost leaf */
	while (current && current->left != NULL) 
		current = current->left; 

	return current; 
} 

/* Given a binary search tree and a key, this function deletes the key 
and returns the new root */
struct Node* deleteNode(struct Node* root, int key) 
{ 
	// base case 
	if (root == NULL) return root; 

	// If the key to be deleted is smaller than the root's key, 
	// then it lies in left subtree 
	if (key < root->data) 
		root->left = deleteNode(root->left, key); 

	// If the key to be deleted is greater than the root's key, 
	// then it lies in right subtree 
	else if (key > root->data) 
		root->right = deleteNode(root->right, key); 

	// if key is same as root's key, then This is the node 
	// to be deleted 
	else
	{ 
		// node with only one child or no child 
		if (root->left == NULL) 
		{ 
			struct Node *temp = root->right; 
			free(root); 
			return temp; 
		} 
		else if (root->right == NULL) 
		{ 
			struct Node *temp = root->left; 
			free(root); 
			return temp; 
		} 

		// node with two children: Get the inorder successor (smallest 
		// in the right subtree) 
		struct Node* temp = minValueNode(root->right); 

		// Copy the inorder successor's content to this node 
		root->data= temp->data; 

		// Delete the inorder successor 
		root->right = deleteNode(root->right, temp->data); 
	} 
	return root; 
} 





int main(int argc, char const *argv[])
{
    struct Node *root = NULL;
    root = Insert(root, 50);
    root = Insert(root, 30);
    root = Insert(root, 20);
    root = Insert(root, 40);
    root = Insert(root, 70);
    root = Insert(root, 60);
    root = Insert(root, 80);

    cout << "Inorder Traversal of BST : \n";
    Inorder(root);

    cout << endl;
    cout << "Delete 20\n";
    root=deleteNode(root, 20);
    // cout << endl;
    cout << "Inorder Traversal of BST after deletion operation : \n";
    Inorder(root);
    cout << endl;
    cout << endl;

    cout << "Delete 30\n";
    root= deleteNode(root, 30);
    // cout << endl;
    cout << "Inorder Traversal of BST after deletion operation : \n";
    Inorder(root);
    cout << endl;
    cout << endl;

    cout << "Delete 50\n";
    root= deleteNode(root, 50);
    // cout << endl;
    cout << "Inorder Traversal of BST after deletion operation : \n";
    Inorder(root);
    cout << endl;
    cout << endl;

    return 0;
}

