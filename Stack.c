#include<stdio.h>
#include<stdlib.h>
struct node
{
 int data;
 struct data* next;
}*top=NULL,*temp=NULL;


void push(int value)
{
  // struct node* temp;
   temp=(struct node*)malloc(sizeof(struct node));
   temp->data=value;
   temp->next=NULL;

    if(top==NULL)
    {
        top=temp;
        printf("\ndata is entered\n");

    }
    else
    {
          temp->next=top;
          top=temp;
          temp=NULL;
    }
}
void pop()
{
   temp=top;
   top=top->next;
 free(temp);
}
void peek()
{
    printf("%d\n",top->data);
}
int main()
{
int value,choose,count=0;
do{
printf("1.PUSH \n 2.POP\n3.PEEK\n");
scanf("%d",&choose);
if(choose==1)
{

    printf("enter the value\n");
    scanf("%d",&value);
    push(value);

}
else
if(choose==2)
{
 pop();
}
else
if(choose==3)
{
    peek();
}
count++;
}while(count<5);
}
