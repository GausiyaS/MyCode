#include<iostream>
#define MAX_SIZE 101
int a[MAX_SIZE];
int top=-1;
using namespace std;


void push(int x)
{
    if(top==MAX_SIZE-1){
    cout<<"Stack Overflow";
    return;
    }
    
    top++;
    a[top]=x;
    
}
void pop()
{
   if(top==-1)
   {
       cout<<"Stack is empty";
       return;
   }
    top--;
}
int Top()
{
    return a[top];
}
void print()
{
    cout<<"Stack :";
for(int i=0;i<=top;i++)
{
    cout<<a[i]<<" ";
}
cout<<endl;
}
int main()
{
    push(10);print();
    push(5);print();
    push(2);print();
    pop();print();
    push(12);print();
    pop();print();
    //Top();print();
}
