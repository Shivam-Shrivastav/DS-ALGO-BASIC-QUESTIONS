# Construct a binary tree form inorder and preorder traversal array

>**Explanation :**
* Preorder folows : Root - Left tree - Right tree  pattern.

* Inorder follows : Left tree - Root - Right tree pattern.

* Suppose we have a preorder array : 1 2 3 4 5 6 7.

* And inorder array : 3 2 4 1 6 5 7.

* So from the pattern which prorder follows we conclude that its index 0 i.e 1 wll be the root and later we find the value of this root in the index of inorder array, we will say that the indices in left side of the index containing value 1 will be the left subtree of the binary tree and the indices which is right side of the index containg value 1 will be the right subtree of the binary tree.

* Further we will visit again the preorder array but this time the from the 2nd index of the array. The value of this index 1 is 2 which will be the root of the left subtree.

* Now we will check this in inrder array also and found its left side as left subtree right side as right subtree.

* And so on.

> *For detailed explanation visit link :* [CLICK HERE](https://www.youtube.com/watch?v=PoBGyrIWisE)



