#include<iostream>
using namespace std;
#define SIZE 150

int arr[SIZE]; //Array Declare as global variable ....
int top = -1;


//Check the array is empty or not...
bool isempty()
{
    if (top == -1)
        return true;
    else
        return false;
}

//Check the array is full or not...
bool isfull()
{
    if(top==SIZE-1)
        return true;
    else
        return false;
}

//Add element into the array...
void push(int value)
{
    if(isfull())
        cout<<"Stack is full.."<<endl;
    else
    {
        top++;
        arr[top]=value;
    }

}


//Delete element from the top...
void pop()
{
    if(isempty())
        cout<<"Stack is empty.."<<endl;
    else
        top--;
}

//Show the top element in the array...
void show_top()
{
    if (isempty())
        cout << "Stack is empty!\n";
    else
        cout << "Element at top is: " << arr[top] << "\n";
}

//Display the all array elements...
void displayStack()
{
    if(isempty())
        cout<<"Stack is empty.."<<endl;
    else
    {
        cout<<"Your array elements are: "<<endl;
        for(int i=0; i<=top; i++)
        {
            cout<<"Element["<<i<<"] = " <<arr[i]<<" "<<endl;
        }
    }
}

int main()
{

    int choice, flag = 1,n;
    while (flag == 1)
    {
        cout << "1.PUSH 2.POP 3.SHOW_TOP 4.DISPLAY_STACK 5.EXIT\n";
        cout<<"What do you want, pick a number: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout<<"Enter your total element what do you want to add: ";
            cin>>n;
            cout<<"Enter your elements(use space to separate): ";
            for(int i=0; i<n; i++)
            {
                int value;
                cin>>value;
                push(value);
            }
            displayStack();
            break;
        case 2:
            cout<<"How many number delete from the top: ";
            cin>>n;
            for(int i=0; i<n; i++)
            {
                pop();
            }
            displayStack();
            break;
        case 3:
            show_top();
            break;
        case 4:
            displayStack();
            break;
        case 5:
            flag = 0;
            break;
        }
    }
    return 0;
}
