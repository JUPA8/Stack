#include <iostream>
#include<string>
#define num 10
using namespace std;
class stack
{
private:
    int *top;
    int data[num];
public:
    stack()
    {
        top=new int;
        *top=-1;
    }
    ~stack()
    {
        delete top;
    }
    bool full()
    {
        if(*top==num-1)
            return true;
        else
            return false;
    }
    bool empty1()
    {
        if(*top==-1)
            return true;
        else
            return false;
    }
    void push(int n)
    {
        if(full())
        {
            cout<<"the stack is full\n";
        }
        else
        {
            data[++(*top)]=n;
        }
    }
    void pop()
    {
        if(empty1())
        {
            cout<<"the stack is empty\n";
        }
        else
        {
            *top--;
        }
    }
    void show()
    {
        if(empty1())
        {
            cout<<"the stack is empty\n";
        }
        else
        {
            for(int i=*top;i>=0;i--)
            {
                cout<<data[i]<<"\n";
            }
        }
    }
};
int main()
{
    stack s;
    int cho,tot,dee,tot1;
    char ch='y';
    while(ch=='y')
    {
        cout<<"to add element enter : 1\n";
        cout<<"to remove element enter : 2\n";
        cout<<"to show element enter : 3\n";
        cin>>cho;
        switch(cho)
        {
        case 1:
            cout<<"how many number want to enter :\n";
            cin>>tot;
            for(int i=0;i<tot;i++)
            {
               cin>>dee;
               s.push(dee);
            }
            break;
        case 2:
            cout<<"how many number want to enter :\n";
            cin>>tot1;
            for(int i=0;i<tot1;i++)
            {
                s.pop();
            }
            break;
        case 3:
            s.show();
        }
        cout<<"do you want to repeat it\n";
        cin>>ch;
    }
}
