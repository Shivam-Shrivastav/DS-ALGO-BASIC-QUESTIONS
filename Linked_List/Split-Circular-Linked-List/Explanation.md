# Splitting of circular linked list into two halves (Explanation)

>Explanation
* Consider number of nodes in circular linked list be 8.

* Half of 8 nodes will be 4 and 4 nodes.
* Therefore to form two halves of a circular linked list, We have to consider 1st node as the head and 4th node as the tail of 1st halfed circular linked list and 5th node as the head and 8th node as the tail of 2nd halfed circular linked list.
* Now we will give address of 1st node to the 4th node to complete a loop and form 1st halfed circular linked list.
* And we will give address of 5th node to the 8th node to complete a loop and form 2nd halfed circular linked list.
---
>Execution
* To find the middle point of the circular linked list, We will need two pointer, One will traverse the whole length of circluar linked list and another will traverse the half length of the circular linked list.

* Inorder to achieve this situtaion the traversal relation between two pointer should be one pointer should traverse with 2 steps and another with 1 step.

* When the 1st pointer reach to the end of length of circular linked list then the 2nd pointer will reach in the middle of i.e half of the length of circular linked list.
* Now we will point head1 pointer of the 1st halfed circular linked list to the head of the original circular linked list and will point head2 pointer of the 2nd halfed circular linked list to the next node of the tail of the first halfed circular linked list.
* Now we will give address where the head1 pointer points to the tail of the 1st circular linked list.
* And will give address where the head2 pointer points to the end of the original circular linked list.
* In this way we form two halves of circular linked list viz 1st halfed circular linked list and 2nd halfed circular linked list.
---