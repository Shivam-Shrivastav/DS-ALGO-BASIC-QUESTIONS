//Insertion and Transversal of circularLinkedList.
#include<bits/stdc++.h>
using namespace std;

struct Node{
	int data;
	Node *next;
};//Making two struct, an integer (data) and a pointer (next).

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
	Node *head = NULL;//Intializing head pointer as null.
	push(&head, 98);
	push(&head, 43);
	push(&head, 9);
	push(&head, 23);//Calling push function and giving address of head and value to be inserted in list respectively.

	cout << "List is: " << endl;
	printList(head); //Calling printList function to print the linked list.

	return 0;
}

