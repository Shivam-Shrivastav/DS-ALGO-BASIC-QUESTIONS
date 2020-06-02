#include <bits/stdc++.h>
using namespace std;

struct Queue{
    stack<int> s1, s2;

    void enQueue(int x)
    {
        s1.push(x);
    }
    int deQueue()
    {
        if (s1.empty() && s2.empty())
        {
            cout << "Queue is empty";
            exit(0);
        }
        if (s2.empty())
        {
            while (!s1.empty())
            {
                s2.push(s1.top());
                s1.pop();
                
            }
        }

        int x = s2.top();
        s2.pop();
        return x;
    }

};



int main(int argc, char const *argv[])
{
    Queue q;

    q.enQueue(23);
    q.enQueue(52);
    q.enQueue(1);

    cout << q.deQueue() << endl;
    cout << q.deQueue() << endl;
    cout << q.deQueue() << endl;
    q.enQueue(64);
    cout << q.deQueue() << endl;
    q.enQueue(99);
    cout << q.deQueue() << endl;

    return 0;
}

