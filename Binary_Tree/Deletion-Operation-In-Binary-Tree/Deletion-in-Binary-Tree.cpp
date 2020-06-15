//C++ program to perform deletion operation in BINARY TREE

#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
    
};
struct Node* newNode(int x) 
{ 
	struct Node* temp = new Node; 
	temp->data = x; 
	temp->left = temp->right = NULL; 
	return temp; 
}; 


void inorder(struct Node* temp) 
{ 
	if (!temp) 
		return; 
	inorder(temp->left); 
	cout << temp->data << " "; 
	inorder(temp->right); 
} 



// void traversal(struct  Node* root)//Level Order Traversal
// {
//     queue<struct Node*> q;
//     q.push(root);
//     while(!q.empty())
//     {
//         Node *temp = q.front();
//         cout << temp->data << " ";

//         if (temp->left!=NULL)
//         {
//             q.push(temp->left);
//         }
//         if (temp->right!=NULL)
//         {
//             q.push(temp->right);
//         }
//         q.pop();
//     }
// }


void deleteDeepestNode(struct Node* root, struct Node* last_node)
{
    queue<struct Node*> q;
    q.push(root);

    struct Node *temp;

    while(!q.empty())
    {
        temp = q.front();

        if (temp==last_node)
        {
            temp=NULL;
            delete (last_node);
            return;
        }
        if (temp->left)
        {
            if (temp->left==last_node)
            {
                temp->left = NULL;
                delete (last_node);
                return;
            }
            else
            {
                q.push(temp->left);
            }
        }
        if (temp->right)
        {
            if (temp->right==last_node)
            {
                temp->right = NULL;
                delete (last_node);
                return;
            }
            else
            {
                q.push(temp->right);
            }
        }
        q.pop();
    }

}





Node* deleteKey( struct Node* root, int key)
{

    if (root == NULL) 
        return NULL; 
  
    if (root->left == NULL && root->right == NULL) { 
        if (root->data == key) 
            return NULL; 
        else
            return root; 
    }
  
    queue<struct Node*> q;
    q.push(root);

    struct Node *temp;
    struct Node *key_node = NULL;


    while(!q.empty())//Unless we find the deepest and right most node
    {
        temp = q.front();
        
        if (temp->data = key)
        {
            key_node = temp;
        
        }
        if (temp->left!=NULL)
        {
            q.push(temp->left);
        }
        if (temp->right!=NULL)
        {
            q.push(temp->right);
        }
        q.pop();
    }

    if (key_node!=NULL)
    {
        int x = temp->data;
        deleteDeepestNode(root, temp);
        key_node->data = x;

    }

    return root;
}







int main(int argc, char const *argv[])
{
    struct Node *root = newNode(12);

    root->left = newNode(9);
    root->left->left = newNode(18);

    root->right = newNode(43);
    root->right->right = newNode(8);
    root->right->left = newNode(3);

    cout << "Binary tree before deletion: ";
    inorder(root);//Level order traversal
    cout << endl;
    int key;

    cout << "Enter the value you want to be deleted in given Binary Tree :";
    cin >> key;
    cout << endl;

    //DELETION PROCESS
    root = deleteKey(root, key);


    cout << "Binary tree after deletion: ";
    inorder(root);//Level order traversal
    cout << endl;





    return 0;
}
