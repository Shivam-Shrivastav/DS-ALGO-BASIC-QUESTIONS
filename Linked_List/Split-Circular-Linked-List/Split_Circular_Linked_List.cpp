//Splitting circular list into two halves.
#include<bits/stdc++.h>
using namespace std;

struct Node{
	int data;
	Node *next;
};//Making two struct, an integer (data) and a pointer (next).


void splitList(Node *head, Node **head1, Node **head2)
{
	Node *slowptr = head;
	Node *fastptr = head;//Pointing slow and fast pointer where the head pointer points i.e toward the newest node.


	if (head==NULL)
	{
		return;//For single node no distribution take place
	}

	while(fastptr->next->next != head && fastptr->next != head)
	{
		fastptr = fastptr->next->next;//Takes 2 step untill reaching to the end node of the circular linked list (For odd number of nodes)
		slowptr = slowptr->next;//Takes 1 step and reach middle of the circular linked list

	}

	if (fastptr->next->next == head)//To reach end node of the circular linked list;
	{
		fastptr = fastptr->next;
	}

	*head1 = head;//Pointing head1 to first node of the original linkedd list.

	if (head->next!=head)
	{
		*head2 = slowptr->next;//Pointing head2 to next node which the slowptr points.
	}

	fastptr->next = *head2;//Pointind tail of the 2nd halfed circular list to head1 to form a circular linked list.
	slowptr->next = *head1;//Pointind tail of the 1st halfed circular list to head2 to form a circular linked list.
}

void push(Node **head,int data)
{
	Node *ptr = new Node();//Making a malloc Node in heap and pointing its address by pointer *ptr.
	Node *temp = *head;//Pointing a pointer temp where the pointer head points.
	ptr->data = data;//Inserting data in Node present in heap through ptr pointer.
	ptr->next = *head;//Pointing Node's pointer to its next Node.

	if (*head != NULL)//At initiation of insertion.
	{
		while (temp->next != *head)//Unless we find the head of the node i.e first node
		{
			temp = temp->next;//We will change the postion of temp pointer to the next node.
		}
		temp->next = ptr;//Pointing the tail of the node to the newest node to form again a Circular linked list.
	}
	else
	{
		ptr->next = ptr;//First Node points itself to form circular Linked list.

	}

	*head = ptr;//Point the head pointer to the newest node.
}
void printList(Node *head)
{
	Node *temp = head;//Intially point the temp poiinter to the head node i.e newest node.
	if (head!=NULL)
	{
		do
		{
			cout << temp->data << " "; //Tranverse data of all node one by one
			temp = temp->next;
		} while (temp != head);//Unless temp pointer reach again to the newest node that is pointed by head pointer.
	}


}//This function print the linked list

int main(int argc, char const *argv[])
{
	int listSize, i;

	Node *head = NULL; //Intializing head pointer as null.
	Node *head1 = NULL;//Intializing head1 pointer as null.
	Node *head2 = NULL;//Intializing head2 pointer as null.
	push(&head, 98);
	push(&head, 43);
	push(&head, 9);
	push(&head, 23);//Calling push function and giving address of head and value to be inserted in list respectively.

	cout << "Original circular linked list : " << endl;
	printList(head); //Calling printList function to print the linked list.

	splitList(head, &head1, &head2);
	cout << endl;

	cout<< "1st halfed circular linked list : " << endl;
	printList(head1);
	cout << endl;

	cout<< "2nd halfed circular linked list : " << endl;
	printList(head2);


	return 0;
}
