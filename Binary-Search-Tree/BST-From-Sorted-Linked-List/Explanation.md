# Construct a Binary Search Tree from a Sorted Linked List.

> **Explanation :**

* In this exercise we will be given a sorted linked list.

* We have to construct a binary search tree from this sorted linked list.

> **Code Execution :**

* We will first count the number of nodes in the linked list. Let count be n.

* And then we will make our left subtree of the BST from n/2 nodes of the linked list and then we will insert the value of the middle node of the linked list to the root of the BST and linked its left child to the left subtree.

* And then the element after n/2 nodes we construct right subtree of the BST.

---

