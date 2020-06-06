//C++ program to change the prefix expression to infix expression
#include<bits/stdc++.h>
using namespace std;
bool isOperator(char c)//Check weather the symbol is operator or operand.
{
    if (c=='*'|| c=='/'|| c=='+'|| c=='-')
    {
        return true;//If operator return true.
    }
    else
    {
        return false;//If operand return false.
    }
}

string prefixToinfix(string exp)//Function to change prefix to infix.
{
    std::stack<string> st;//Initialize a strng type stack.
    int length = exp.length();
    for (int i = length-1 ; i >=0; i--)//Traverse from the back side of the prefix expression.
    {
        //If the symbol is operator i.e isOperator function is true, we will pop two operand from the stack.
        if (isOperator(exp[i]))
        {
            string op1 = st.top();
            st.pop();
            string op2 = st.top();
            st.pop();
            //Here we will make a temp string and write it in the infix form eg: (a+b).
            string temp = "(" + op1 + exp[i] + op2 + ")";
            st.push(temp);//Later we will push the temp string i.e in the form of infix expression into stack.
        }
        else
        {
            //If the symbol is not a operator then we will push the symbol in stack.
            st.push(string(1, exp[i]));
        }
    }
    return st.top();//Return the whole string which become in infix expression in the above process.
}

int main(int argc, char const *argv[])
{
    string exp = "*-A/BC-/AKL";
    cout<< prefixToinfix(exp)<<endl;//Call and Print the prfixToinfix function.

    return 0;
}
