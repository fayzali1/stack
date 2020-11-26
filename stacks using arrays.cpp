#include<iostream>
using namespace std;

#define MAX 100
class Stack{
    private:
        int top;
    public:
        int myStack[MAX];
        Stack()
        {
            top=-1;
        }
        void Push(int a)
        {
            if(top>=MAX-1)
            {
                cout<<"Stack Overflow"<<endl;
            }
            else
            {
                myStack[++top]=a;
                cout<<a<<endl;
            }
        }
        int Pop()
        {
            if(top<0)
            {
                cout<<"Stack Underflow."<<endl;
            }
            else
            {
                return myStack[--top];
            }
        }
        bool IsEmpty()
        {
            return(top<0);
        }
        void display()
        {
            for(int i=0; i<MAX; i++)
            {
                cout<<myStack[i]<<endl;
            }
        }
};

int main()
{
    Stack stack;
    cout<<"Pushed Items:"<<endl;
    stack.Push(1);
    stack.Push(2);
    stack.Push(3);
    cout<<"Popped Items:"<<endl;
    while(!stack.IsEmpty())
    {
        cout<<stack.Pop()<<endl;
    }
    return 0;
}
