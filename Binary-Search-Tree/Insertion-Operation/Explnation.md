# Insertion Operation In Binary Search Tree

> **Explanation :**

* In Binary search tree the value of the element in the left subtree will be always lesser the the value their root.

* And the value of the element or node in the right tree has always greater value than their root node.

> **Code Execution :**

* In binary search tree inorder to search any element or to insert any key element in the tree we will first go through the root of the tree.

* We will compare the value of inserted nodefrom the value of the root node.
    * If the value of the in inserted node is greater then value of the root node.
        * Then we will declare the root of right subtree as root and so on.
    
    * If the value of the in inserted node is lesser than value of the root node.
        * Then we will declare the root of left subtree as root and so on.

---
