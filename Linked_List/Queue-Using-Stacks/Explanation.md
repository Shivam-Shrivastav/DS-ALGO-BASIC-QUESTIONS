# Make a Queue using stacks

> Stack Definition :
* Stack is a linear data structure which follows a particular order in which the operations are performed. The order may be LIFO(Last In First Out) or FILO(First In Last Out).

> Queue Definition :
  * Unlike stacks, a queue is open at both its ends. One end is always used to insert data (enqueue) and the other is used to remove data (dequeue). Queue follows First-In-First-Out methodology, i.e., the data item stored first will be accessed first.

> Code Explanation :
* From the definition of Stack and Queue we get that the Stack follows Last-In-First-Out methodology while Queue follow First-In-First-Out methodology.

* From our code we will try to make Queue with the help of two stacks and that will support the First-In-First-Out methodology.

> Code Execution :
* Firstly we will make a structure named Queue.

* In this structure we will make two integer type stacks named s1 and s2.
* And will make two function named enQueue and deQueue.
* enQueue function will push integer value in stack s1 whenever called by main function.
* While on calling up the deQueue function by main function it will check wheather stack s2 is empty then integer value from stack s1 is pushed in stack s2 in LIFO manner. Thus the integer value put first in the stack s1 comes up int the top of stack s2, now we can pop the top of stack s2 and we will get the integer value which was first push in stack s1.
* Hence with the help of two stacks we can make a Queue which follow FIFO methodology.

---
