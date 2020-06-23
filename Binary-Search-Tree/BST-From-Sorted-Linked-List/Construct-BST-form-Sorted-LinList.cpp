//C++ program to construct BST from A Sorted Linked List.

#include<bits/stdc++.h>
using namespace std;

class LLNode
{
    public:
        int data;
        LLNode *next;
};

class TreeNode
{
    public:
        int data;
        TreeNode *left;
        TreeNode *right;
};

void push(LLNode **head,int data)
{
    LLNode *node = new LLNode();

    node->data = data;
    node->next = (*head);
    *head = node;
}

TreeNode *newNode(int x)
{
    TreeNode *temp = new TreeNode();

    temp->data = x;
    temp->left = NULL;
    temp->right = NULL;

    return temp;
}
void printList(LLNode *head)
{
    LLNode *temp = head;
    while (temp!=NULL)
    {
        cout<<temp->data<< " ";
        temp = temp->next;
    }
}
int countNode(LLNode *head)
{
    int count = 0;
    LLNode *temp = head;
    while (temp!=NULL)
    {
        temp = temp->next;
        count++;
    }
    return count;
}

void preOrder(TreeNode* node)  
{  
    if (node == NULL)  
        return;  
    cout<<node->data<<" ";  
    preOrder(node->left);  
    preOrder(node->right);  
}

TreeNode *ListToBST(LLNode **head, int n)
{
    if (n<=0)
    {
        return NULL;
    }

    //construct left subtree by n/2 nodes
    TreeNode *left = ListToBST(head, (n / 2));

    //Enter middle node value in root's value.
    TreeNode *root = newNode((*head)->data);

    //root left child as left subtree
    root->left = left;

    //change head pointer to middle node of the list
    *head = (*head)->next;

    root->right = ListToBST(head, (n - (n / 2) - 1));

    return root;
}

TreeNode *constructBST(LLNode *head)
{


    int n = countNode(head);

    return ListToBST(&head, n);
}

int main(int argc, char const *argv[])
{
    LLNode *head = NULL;
    push(&head, 7);
    push(&head, 6);
    push(&head, 5);
    push(&head, 4);
    push(&head, 3);
    push(&head, 2);
    push(&head, 1);

    cout << "Given LinkedList is :" << endl;
    printList(head);


    //Construct BST from this sorted Linked List
    TreeNode *root = constructBST(head);
    cout<<"\nPreOrder Traversal of constructed BST ";  
    preOrder(root);

    return 0;
}
