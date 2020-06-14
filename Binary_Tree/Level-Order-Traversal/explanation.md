# Level Order Traversal In Binary Tree

> **Definition :**
 * Level : Level is number of nodes on path from root to the node (including root and node).

> **Expnantion :**

* In binary tree if we try to traverse a node by its parent node it will not be possible to traverse the binary node in level order.

* Therefore we will require a queue to store the address of the the left and right node of the parent node untill node with 0 child found.

* And we will dequeue the address of parent node in FIFO methodlogy once it is visited.

> **Code Execution :**

* First we will make a binary tree in the main function.

* Then we will make a function to traverse the binary tree in level order.

* In this function we will make a queue which will store the address of the root later its children node unless it got empty.

> *For more detailed explantion click on the given link :*   [CLICK HERE](https://www.youtube.com/watch?v=86g8jAQug04 "YoutTube Link")
---
