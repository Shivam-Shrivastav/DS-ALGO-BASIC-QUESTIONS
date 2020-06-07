//C++ program to solve the Stock span problem

#include<bits/stdc++.h>
using namespace std;

void spanCounter(int stockRate[],int len)
{
    stack<int> st;
    int span[len];
    span[0] = 1;
    st.push(0);
    for (int i = 1; i < len; i++)
    {
        
        while(!st.empty() && stockRate[st.top()]<=stockRate[i])
        {
            st.pop();

        }
        if (st.empty())
        {
            span[i] = i + 1;
        }
        else
        {
            span[i] = i - st.top();
        }
        st.push(i);
    }
    for (int i = 0; i < len; i++)
    {
        cout << span[i] << " ";
    }
}

int main(int argc, char const *argv[])
{
    int stockRate[]={100,80,85,60,40,45,90};
    int len = sizeof(stockRate) / sizeof(stockRate[0]);
    spanCounter(stockRate,len);

    return 0;
}

