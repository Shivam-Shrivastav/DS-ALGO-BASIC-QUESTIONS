# Design a Getmin Stack.

> **Explanation :**
* This exercise is to design a stack that can pop the minimum value with the time complexity of O(1).

* We will make this type of stack by using two stack.
    * 1st stack will be called as actual stack and it will store the original pushed values.

    * While the 2nd stack named auxiliary stack will store the minium of the top values of actual and auxiliary stack.

* We will design our stack such that, whenever we pop the stack only minimum value will pop up with the time complexity of O(1).

> **Code Execution :**

* Firstly we will make a class named Stack and set some integers and array like max, arr[max],top in private class and undefined function like stack, isEmpty, isFull, pop and push.

* Further we will define each function.

* Then we will make a class for our auxilary stack named SpecialStack, in it we will put undefined function like push pop and getMin.

* Further we will define this fuctions.
* In its push function we will push only those value to auxiliary function which will be the minium of the top values of actual and auxiliary stack.
* Pop and getMin function will return only the minimum value from the auxiliary stack.
---




