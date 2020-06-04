//IMPLEMENT STACK USING QUEUES
#include<bits/stdc++.h>
using namespace std;
class Stack
{
    queue<int>  q1,q2;
    
    public:
        void push(int x)
        {
            
            q2.push(x);//Enqueue element in Q2

            while (!q1.empty())
            {
                q2.push(q1.front());
                q1.pop();
            }

            queue<int> temp;
            temp=q1;
            q1 = q2;
            q2 = temp;

        }

        void pop()
        {
            if (q1.empty()==true)
            {
                return;
            }
            else
            {
                q1.pop();
            }
        }

        int top(){
            if (q1.empty()==true)
            {
                return -1;

            }
            else
            {
                return q1.front();
            }
            
                }
        
        void displayStack(){

            queue<int> temp = q1;
            while (!temp.empty())
            {
                cout << temp.front() << " ";
                temp.pop();
            }
            cout << endl;
        }
};

int main(int argc, char const *argv[])
{
    Stack s;

    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6);
    s.push(7);
    s.pop();
    s.pop();
    s.pop();
    s.displayStack();
    return 0;
}

