#include<stdio.h>
#include<stdlib.h>
//#include<conio.h>

struct node
{
 int data;
struct node*next;
};

int main()
{
int item;
struct node*top=NULL,*newNode,*temp;
char ch;

do
{
printf("\n enter element to push:");
scanf("%d",&item);
newNode=(struct node*)malloc(sizeof(struct node));
newNode->data=item;
if(top==NULL)
 {
  top=newNode;
  top->next=NULL;
 }
 else
 {
  newNode->next=top;
  top=newNode;
 }
printf("MORE TO PUSH(Y/N)?");
ch=scanf("%d",&ch);
}while(ch=='Y'||ch=='y');


printf("\n\n the pop order\nTOP\n");
while(top!=NULL)
{
printf("%d\t",top->data);
temp=top;
top=top->next;
free(temp);
}
printf("BOTTOM");
return 0;
}
