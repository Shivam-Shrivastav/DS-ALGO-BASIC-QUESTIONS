//C++ program to sort an array using stack



/*-----------------------------------------------------------------------------------------------------------

|Explanation :

WE CAN SOLVE THIS PROBLEM BY MAKING TWO STACK 1)INPUT STACK 2) TEMPORARY STACK 
INPUT STACK WILL STORE ALL THE ELEMENT OF ARRAY WHILE TEMPORARY STACK WILL STORE THE ELEMENT IN SORTING ORDER.
LATER THE ELEMENT IN TEMP STACK WILL BE POP OUT AND INSERTED IN ARRAY IN SORTED ORDER.

----------------------------------------------------------------------------------------------------------------
*/


#include<bits/stdc++.h>
using namespace std;
void sortArray(int arr[],int len)
{
    stack<int> input;
    stack<int> tempstck;
    for (int i = 0; i < len; i++)
    {
        input.push(arr[i]);
    }
    while (!input.empty())
    {
        int temp = input.top();
        input.pop();
        while (!tempstck.empty() && tempstck.top()<temp)
        {
            input.push(tempstck.top());
            tempstck.pop();
        }
        tempstck.push(temp);
    }
    for (int i = 0; i < len; i++)
    {
        arr[i] = tempstck.top();
        tempstck.pop();
        cout << arr[i] << " ";
    }
}
int main(int argc, char const *argv[])
{
    int arr[] = {10, 2, 3, 6, 13, 9};
    int len = sizeof(arr) / sizeof(arr[0]);
    sortArray(arr, len);

    return 0;
}
