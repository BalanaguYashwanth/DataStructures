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

void all()
{
    while(top!=NULL)
    {
        printf("%d",top->data);
        top=top->next;
    }


}

int main()
{
    int n,a,sum=0,t,q;
    scanf("%d",&n);

    while(n>0)
    {
        a=n%10;
        n=n/10;

        push(a);

    }
    scanf("%d",&t);
    for(q=1;q<=t;q++)
    {
    pop(q);
    }
     all();
}








