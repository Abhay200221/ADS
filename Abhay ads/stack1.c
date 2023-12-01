#include<stdio.h>
#define max_size 100
int stack[max_size];
int top=-1;
void push(int element)
{
if(top>=max_size-1)
{
printf("STACK OVERFLOW");
return;
}
stack[++top]=element;
}

int pop()
{
if(top<0)
{
printf("STACK UNDERFLOW");
return -1;
}
return stack[top--];
}
int main()
{
push(10);
push(10);
push(10);
printf("%d popped stack \n",pop());
return 0;
}
~
~
