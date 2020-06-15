# Deletion Operation In Binary Tree

> **Explanation :**

* In this exercise we will delete the asked node in the binary tree.

* Since binary tree is different from binary search tree.

* In binary tree order of children doesnot matter as it matters on binary search tree.

* Therefore after deleting the given node we will put the value of most deepest and the right most node.

* **Example :**          

                        
        Delete 11 in below tree :
                            10
                          /    \         
                         11     30
                                  \
                                   8
        Output :    
                            10
                           /   \             
                          8    30



* Here we need to delete the node with value 11, we delete it and put there the value of tha deepest and the right most node i.e 8


> **Code Execution :**

* Here first we will make the binary tree.

* Then we will select a node to delete in the binary tree.

* Then we will make a function to find the node to be deleted and the deepest and right most node.

* At last we will make a function to put the value of the deepest and right most node in the key node i.e the node which is deleted.
---


