#include<stdio.h>
#include<stdlib.h>
 struct node
 {
     int data;
     struct node* next;
 }*temp=NULL,*head=NULL,*tail=NULL;

 void createnode()
 {
     temp=(struct node*)malloc(sizeof(struct node));
     printf("enter the value in the node");
     scanf("%d",temp->data);
     temp->next=NULL;

   if(head=NULL)
   {
       head=tail=temp;
   }
   else
   {
       temp->next=head;
       head=temp;
       temp=NULL;
       printf("the node is noted");
   }
 }

 int display()

 {
    if(head=NULL)
    {
        printf("the node is empty");
    }
    else
    {
        temp=(struct node*)malloc(sizeof(struct node));
        temp=head;
        printf("the value is %d",temp->data);
        temp->next=temp;
    }
 }

 int main()
 {
      int count=0;
do{
     int choose;
     printf("1.createnode\n 2.display");
     scanf("%d",&choose);
     if(choose==1)
     {
        createnode();
     }
     if(choose==2)
     {
         display();
     }
}while(count<5);
 }
