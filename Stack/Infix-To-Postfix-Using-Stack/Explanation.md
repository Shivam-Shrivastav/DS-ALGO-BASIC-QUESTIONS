# Change Infix expression to Postfix expression

> **Definition :**
* **Infix Expression :** The expression of the form ( a )( op )( b ). When an operator is in-between every pair of operands.
[ eg : a+b ]

* **Postfix Expression :** The expression of the form ( a )( b )( op ). When an operator is followed for every pair of operands.[ eg : ab+ ]

> **Need of Postfix Expression :**

*Why do we need a postfix expression ?*
* The answer is since compiler scan a string form left to right, so for complex expression like ((a+b)*(c-d)-e)*f the complier has to scan the expression 4 times inorder to evaluate correct value of the expression.

* The postfix expression make the work of compiler easy as in postfix expression the compiler has to scan only once to evaluate the the complex expression as above.

> **Explanation :**

* In this exercise we will be given an infix expression and we have to change it to postfix expression.

* We will do this with a help of stack in which we will push and pop operators and parantheses according to our need and we will store the variable and operator as postfix expression in a string array.

> **Code Execution :**

* Firstly we will make a function for the operators to set their precedence accordind to the rule.

* Then we will make a function to change infix to postfix, This function will take the given infix expression as a string type argument.

* We will make a stack named "st" and a string array named "ns".
 * **The rule or the algorithm to change the infix to postfix expression is as follows :**
    * If scanner or compiler is at any variable it will take it out and store in ns string array.

    * If stack is empty or lower precedence operator in at the top of stack while the scanner is at higher precedence , then we will push the scanner operator in the stack.

    * If scanner operator is of lower precedence then of the the operator present at the top of the stack, then the top of the stack will be pop out and store after the variable in "ns" string array unless the stack got empty.

    * If scanner is at "(" parantheses then push this parantheses in the stack;

    * If the scanner is at ")" then pop out the top of the stack unless we got "(" parantheses present is the stack or unless stack got empty.

    * We will repeat the process unless we write the whole expression into postfix expression.

* We will make a main function to call the function to chance infix to postfix.






