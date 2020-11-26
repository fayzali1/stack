#include<iostream>
using namespace std;

struct node
{
    int data;
    node* next;
};

class Stack
{
    private:
        node* head;
    public:
        Stack()
        {
            head=NULL;
        }
        void Push(int a)
        {
            node *temp=new node;
            temp->data=a;
            temp->next=NULL;
            if(head==NULL)
            {
                head=temp;
            }
            else
            {
                temp->next=head;
                head=temp;
            }
            cout<<a<<endl;
        }
        void pop()
        {
        	if(head==NULL)
        	{
        		cout<<"Stack underflow"<<endl;
			}
            node *temp=new node;
            temp=head;
            cout<<head->data<<endl;
            head=head->next;
            delete(temp);
        }
        int Top()
        {
            return head->data;
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
    stack.pop();
    stack.Top();
    return 0;
}
