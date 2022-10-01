#include<iostream>
#include<stack>     //For stack data structure....
using namespace std; // must include namespace, otherwise stack do not work

int main()
{
    stack<int> number; // Stack declaration....
    cout << "Add some element into push() funtion:"<<endl;
        cout<<"number.push(2);"<<endl
            <<"number.push(4);"<<endl
            <<"number.push(6);"<<endl
            <<"number.push(8);"<<endl;
    // using push() function...add element into a stack...
    number.push(2);
    number.push(4);
    number.push(6);
    number.push(8);
        //Check the stack is empty or not...
    if(number.empty())
        cout<<"Stack is empty..."<<endl;
    else
        cout<<"Stack is not empty..."<<endl;
    // Print the top elements.....
    cout << "Size of the Stack: " << number.size() << endl;
    cout << "Top element is: " << number.top() << endl;

    //Detete top element into pop() function;
    number.pop();
    cout<<"The top element 8 is removed..."<<endl;

    //Print the Stack element....
    cout<<"Present elements on the Stack are: ";
    while(!number.empty())
    {
        cout<<number.top()<<" ";
        number.pop();
    }

    return 0;
}
