//the basic implementation of the stack using array
#include <iostream>
#define MAX 50
using namespace std;
int arr[MAX];
int top=-1;
void push(int x)
{
    if (MAX-1==top)
    {
        cout<<"stack overflow"<<endl;
        return;
    }
    arr[++top]=x;
}
void pop()
{
    if (top==-1)
    {
        cout<<"stack underflow"<<endl;
        return;
    }
    top--;
}
int main()
{
    push(10);
    push(20);
    push(30);
    push(40);
    pop();
    for(int x=0;x<=top;x++)
    {
        cout<<arr[x]<<endl;
    }
}