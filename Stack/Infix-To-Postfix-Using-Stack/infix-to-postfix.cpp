//C++ program to change infix expression to postfix expression.
#include<bits/stdc++.h>
using namespace std;

int prec(char c)//Giving precedence to operators.
{
    if (c =='^')
    {
        return 3;
    }
    else if (c == '*' || c == '/')
    {
        return 2;
    }
    else if (c == '+' || c == '-')
    {
        return 1;
    }
    else
    {
        return -1;
    }

}

void infixToPostfix(string exp)//Function to change infix to postfix
{
    std::stack<char> st;
    st.push('N');//Bottom of the stack, will be helpful later to assuming stack as empty.
    int l = exp.length();//Length of the expression.
    string ns;
    for (int i = 0; i < l; i++)
    {
        if (exp[i]>='a' && exp[i]<='z' || exp[i]>='A' && exp[i]<='Z')
        {
            ns += exp[i];//Insert variable to form postfix expression.
        }
        else if (exp[i]== '(')
        {
            st.push('(');//Push in stack
        }
        else if (exp[i]== ')')
        {
            while (st.top()!='N' && st.top()!='(')//Unless stack got empty or '(' parantheses come
            {
                char c = st.top();
                st.pop();
                ns += c;

            }
            if (st.top()=='(')
            {
                st.pop();
            }
        }
        else
        {
            //Unless stack got empty and scanner opererator precedence should be lower than the operator in stack.
            while (st.top()!='N' && prec(exp[i])<=prec(st.top()))
            {
                char c = st.top();
                st.pop();
                ns+=c;
    
            }
            st.push(exp[i]);
        }
        
        
    }
    //Pop all the remaining element from stack.
    while (st.top()!='N')
    {
        char c = st.top();
        st.pop();
        ns += c;
    }
    cout << ns << endl;
}

int main(int argc, char const *argv[])
{
    string exp ="a+b*(c^d-e)^(f+g*h)-i";
    infixToPostfix(exp);//Calling function.
    return 0;
}
