# Construct a Binary Search Tree From a Binary Tree.

> **Explanation :**

* We know that in binary search tree the value of elements in left subtree is lesser than tha root of the tree while that of right tree is greater.

* While in Binary Tree numbers are inserted randomly.

* So to convert binary tre to BST we will make an array which will store the inorder traversal elements of binary tree.

* Later we will sort this array using **Quick Sort**.

* And then use the element of this sorted array to construct our BST in inorder traversal mannner.

* We made a sorted array so as to construct BST which has the value of elements in left subtree is lesser than tha root of the tree while that of right tree is greater.

---







