/*----------Implement two stack in an array----------
* In this exercise we will implement two stack inside an array.
* In order to utilize the full space of array we will start two stacks from the two extreme corners of the array.
* That is 1st stack from the 0 index of the array and 2nd stack form the (n-1) index of the array.
 */
#include<bits/stdc++.h>
using namespace std;
class twostacks
{
    private:
        //memeber data
        int size;
        int top1;
        int top2;
        int *arr;
    
    public:
        //member function
        twostacks(int n) //constructor
        {
            size = n;
            arr = new int[n];//array of size of n
            top1 = -1;//top of stack1
            top2 = size;//top of stack2
        }
    
    void push1(int x)
    {
        if(top1<top2-1)//if top of stack1 is less than top of stack2
        {
            top1++;
            arr[top1] = x;
        }
        else
        {
            cout << "Stack1 Overflow";
            exit(1);
        }
    }
    void push2(int x)
    {
        if(top1<top2-1)//if top of stack1 is less than top of stack2
        {
            top2--;
            arr[top2] = x;
        }
        else
        {
            cout << "Stack1 Overflow";
            exit(1);
        }
    }
    int pop1()
    {
        if (top1>=0)//top of stack1 is in between the index of stack1
        {
            int x = arr[top1];
            top1--;
            return x;
        }
        else
        {
            cout << "Stack1 Underflow";
            exit(1);

        }
    }
    int pop2()
    {
        if (top2<=size-1)//top of stack2 is in between the index of stack1
        {
            int x = arr[top2];
            top2++;
            return x;

        }
        else
        {
            cout << "Stack2 Underflow";
            exit(1);
        }
    }

    

};

int main(int argc, char const *argv[])
{
    twostacks ts(5);
    ts.push1(2);
    ts.push1(45);
    ts.push1(37);
    cout << "pop from stack1 is" <<" "<< ts.pop1() << endl;
    ts.push2(83);
    cout << "pop from stack2 is" <<" "<<  ts.pop2() << endl;

    return 0;
}
