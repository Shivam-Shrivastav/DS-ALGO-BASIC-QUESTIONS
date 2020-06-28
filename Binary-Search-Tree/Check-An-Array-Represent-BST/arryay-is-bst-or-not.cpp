// C++ implementation to check if the given array 
// can represent Level Order Traversal of Binary 
// Search Tree 
#include <bits/stdc++.h> 
using namespace std; 
struct nodeDetails
{
	int data;
	int min;
	int max;
};

bool levelOrderTraversal(int arr[], int n)
{


	if (n==0)
	{
		return true;
	}

	//index to traverse the array
	int i = 0;

	//make a queue of type nodeDetails

	queue<nodeDetails> q;


	//Make the root of the node of nodeDetail type
	//And let its value be the first elememnt of the array/
	//And min and max value be -ve and +ve infinity be respectively.
	nodeDetails newNode;
	newNode.data = arr[i++];
	newNode.min = INT_MIN;
	newNode.max = INT_MAX;

	q.push(newNode);

	while (i<n && !q.empty() )
	{	
		//Let front of the queue be temp node of type nodeDetail
		nodeDetails temp = q.front();
		q.pop();

		//Since we are representing the LEVEL ORDER TRAVERSAL.
		//We will first check the left child of the parent node.
		//After then we will check the right child of the parent node.


		//For left child
		if (i<n && arr[i]<temp.data && arr[i]>temp.min)
		{
			newNode.data = arr[i++];
			newNode.min = temp.min;
			newNode.max = temp.data;
			q.push(newNode);
		}

		//For right child
		if (i<n && arr[i]>temp.data && arr[i]< temp.max)
		{
			newNode.data = arr[i++];
			newNode.min = temp.data;
			newNode.max = temp.max;
			q.push(newNode);
		}
	}
	


	if (i==n)
	{
		return true;
	}
	else
	{
		return false;
	}

}

int main(int argc, char const *argv[])
{
	int arr[] = {7, 4, 12, 3, 6, 8, 1, 5, 10};
	int n = sizeof(arr) / sizeof(arr[0]);
	if (levelOrderTraversal)
	{
		cout << "Yes";
	}
	else
	{
		cout << "No";
	}

	return 0;
}
