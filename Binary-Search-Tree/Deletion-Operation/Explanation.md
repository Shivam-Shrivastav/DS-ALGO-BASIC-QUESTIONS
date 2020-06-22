# Deletion Operation on BST

> **Explanation :**

* There are **3 cases** in deletion operation on BST.
    * 1. *When node to be deleted has no child :*
            * In this case we will simply delete or free the node and return NULL.
    * 2. *When node to be deleted has only one child :*
            * In this case we will delete or free the node and return the child of this node to the parent of the deleted node.
    * 3. *When node to be deleted has two children :*
            * In  this case we will find the minimum valued node in the right subtree or maximum valued node in the left subtree, Then we change the value of the node to be deleted to this above mentioned node. And delete this minimum valued node in the right subtree or maximum valued node in the left subtree.
---