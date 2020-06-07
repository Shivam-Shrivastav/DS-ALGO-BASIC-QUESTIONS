# Stock Span Problem

> **Explanation :**
* In this exercise we will solve a stock span problem.

* In stock span problem we will count the number of or span of days a particular stock rate was higher then its previous stock rates.

> **Code Execution :**
* Firstly we iterate the days and check each days stock rate.

* Since the span of 1st day will be 1, therefore in span array its value will be one.

* From the second day we will check stock rate and its previous days stock rate if previous days stock rate is lower, we will pop out the elements from the stack for those days, unless stack is empty or higher stock rate day is found.

* If we found the day which has higher stock rate than current then we will substract current day's index from that day's index to get the span of our current day's span.

>*For more details explanation check out this link :* [Click Here](https://www.youtube.com/watch?v=-IFmgue8sF0 "YouTube Link")


