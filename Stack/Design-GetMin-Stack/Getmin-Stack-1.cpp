#include<bits/stdc++.h>
using namespace std;
class Stack{
    private:
        static const int max = 100;
        int arr[max];
        int top;
    
    public:
        Stack(){
            top = -1;
        }
        bool isEmpty();
        bool isFull();
        int pop();
        void push(int x);

};

bool Stack :: isEmpty()
{
    if (top==-1)
    {
        return true;
    }
    else
    {
        return false;
    }

}

bool Stack :: isFull()
{
    if (top==max-1)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int Stack :: pop()
{
    if (isEmpty())
    {
        cout << "Stack Underflow";
       
        abort();
    }
    int x = arr[top];
    top--;
    return x;
}

void Stack :: push(int x)
{
    if (isFull())
    {
        cout << "Stack Overflow";
        abort();
    }
    top++;
    arr[top] = x;

}
class SpecialStack : public Stack{
    Stack min;

public:
    int pop();
    void push(int x);
    int getMin();
};


void SpecialStack :: push(int x)
{
    if (isEmpty()==true)
    {
        Stack ::push(x);
        min.push(x);
    }
    else
    {
        Stack::push(x);
        int y = min.pop();
        min.push(y);
        if (x<y)
        {
            min.push(x);
        
        }
        else
        {
            min.push(y);
        }
    }
}

int SpecialStack ::pop()
{
    int x = Stack ::pop();
    min.pop();
    return x;

}
int SpecialStack :: getMin()
{
    int x = min.pop();
    min.push(x);
    return x;

}
int main(int argc, char const *argv[])
{
    SpecialStack s;
    s.push(10);
    s.push(12);
    s.push(11);
    s.push(13);
    s.push(5);
    cout << s.getMin() << endl;
    cout << s.getMin() << endl;
    s.pop();
    s.pop();
    cout << s.getMin() << endl;



    return 0;
}
