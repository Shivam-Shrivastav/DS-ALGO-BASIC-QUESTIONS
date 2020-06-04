# Implemention of Stack using Queue

> **Explanation :**
* In this exercise we will design a stack using two queues such that it follows LIFO methodology.
> **Code Execution :**
* Firstly we will name the two queues as Q1 and Q2.

* Then we will enqueue the element in the Q2 queue
* Then we will check weather Q1 is empty or not, if not then we will dequeue the element in Q1 and tranfer it to Q2 unless Q1 got empty.(Both Q1 and Q2 will follow FIFO concept)
* Now at the end we will swap Q1 with Q2, in this manner the element in the Q1 queue will be set in LIFO manner.
---