#include<iostream>
using namespace std;
int main(){
    int a=9, b=6;
    //Using ARITHEMATIC OPERATORS
    /*NOTE :- To copy above line down : SHIFT + ALT + DOWN ARROW
              For typing in multiple places : HOLD ALT THEN CLICK ON THE SECOND PLACE THEN LEAVE ,,READY TO TYPE
              For Selecting from one point to other : USE SHIFT AND CLICK TO ONE POINT TO OTHER */
    cout<<"[1.]FOLLOWING ARE THE ARITHEMATIC OPERATOR TYPE : "<<endl;    
    cout<<"The value of a + b is : "<<a+b<<endl;    
    cout<<"The value of a - b is : "<<a-b<<endl;    
    cout<<"The value of a * b is : "<<a*b<<endl;    
    cout<<"The value of a / b is : "<<a/b<<endl;
    cout<<"The value of a % b is : "<<a%b<<endl;
    cout<<"The value of a++ is : "<<a++<<endl;
    //Here "A++" means first print A, then do increament of A by 1 inside the code 
    cout<<"The value of a-- is : "<<a--<<endl;
    //Here "A--" means first print A, then do decrement of A by 1 inside the code 
    cout<<"The value of ++a is : "<<++a<<endl;
    //Here "++A" means first increment in value of A, then printing A
    cout<<"The value of --a is : "<<--a<<endl;
    //Here "--A" means first decrement in value of A, then printing A
    cout<<endl;

    //COMPARISION OPERATORS(gives boolean value[0 or 1])
    cout<<"[2.]FOLLOWING ARE THE COMPARISION OPERATOR TYPE : "<<endl;
    cout<<"The value of a == b is : "<<(a == b)<<endl;
    cout<<"The value of a != b is : "<<(a != b)<<endl;
    cout<<"The value of a >= b is : "<<(a >= b)<<endl;
    cout<<"The value of a <= b is : "<<(a <= b)<<endl;
    cout<<"The value of a > b is : "<<(a > b)<<endl;
    cout<<"The value of a < b is : "<<(a < b)<<endl;
    cout<<endl;

    //LOGICAL OPERATORS(gives boolean value[0 or 1])
    cout<<"[3.]FOLLOWING ARE THE LOGICAL OPERATOR TYPE : "<<endl;
    cout<<"The value of this logical 'AND(&&)' operator with ((a == b) || (a < b)) is : "<<((a == b) && (a < b))<<endl;
    //The AND operator work as a INTERSECTION.
    cout<<"The value of this logical 'OR(||)' operator with ((a == b) || (a < b)) is : "<<((a == b) || (a < b))<<endl;
    //The OR operator work as UNION.
    cout<<"The value of this logical 'NOT(!)' operator with (!(a == b)) is : "<<(!(a == b))<<endl;
    //The NOT operator will print opposite of the answer to the equation.

    return 0;      
}