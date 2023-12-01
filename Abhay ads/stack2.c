#include<stdio.h>
void main()
{
int top=-1,limit=0,ch,x,i;
printf("enter the limit");
scanf("%d",&limit);
int stack[limit];
 do
 {
 printf("enter your choice \n 1.PUSH\n 2.POP\n 3.DISPLAY\n 4.EXIT\n");
 scanf("%d",ch);

switch(ch)
{
case 1:

if(top == limit-1)
 {
 printf("overflow");
 }
else{
    printf("enter the number");
    scanf("%d",&x);
    top=top+1;
    stack[top]=x;
    }
break;

case 2:

if(top == -1)
{
printf("underflow");
}
else{
    top--;
}
 break;


case 3:
if(top == -1)
{
printf("stack is empty");
}
else
{
for(i=0;i<=top;i++)
{
printf("%d",stack[i]);
}
}
break;
case 4:
{
break;
}
default:
printf("wrong input");
}
}while(ch!=4);


}


          