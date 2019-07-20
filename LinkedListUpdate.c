#include<stdio.h>
#include<stdlib.h>
void display();
void insertbeg();
void insertpos();
void insertend();
void deleteend();
void deletebeg();
void deletepos();
void createnode();
struct node
{
    int data;
    struct node* next;
}*head=NULL,*tail=NULL,*temp=NULL;

int main()
{
    int choice,choose,count;
    do
    {
    printf("1.Insertion \n 2.Deletion");
    scanf("%d",&choice);
    if(choice==1)
    {
     printf("1.Insertbeg\n2.Insertend\n3.Insert pos");
     scanf("%d",&choose);
     if(choose==1)
     {

         insertbeg();
     }
     if(choose==2)
     {

         insertend();
     }
     if(choose==3)
     {

         insertpos();
     }
     else
        {
            printf("1.Deletebed\n2.Deleteend\n3.Deletepos ");
            scanf("%d",&choice);
            if(choice==1)
            {
                deletebeg();
            }
            if(choice==2)
            {
                deleteend();
            }
            if(choice==3)
            {
                deletepos();
            }

        }
    }


}while(count<5);

void createnode()
{

    printf("Enter the value");
    scanf("%d",&temp->data);
    temp=(struct node*)malloc(sizeof(struct node));
    temp->next=NULL;


}
void insertbeg()
{
    if(head==NULL)
    {
        head=tail=temp;
        temp=NULL;
    }
    else
    {
      temp->next=head;
      head=temp;
      temp=NULL;
    }
    display();
}


void insertend()
{
    if(head==NULL)
    {

        head=tail=temp;
        temp=NULL;
    }
    else
    {
        tail->next=temp;
        tail=temp;
        temp=NULL;
    }
    display();

}

 void insertpos()
 {
     struct node* iterate;
     int pos;
     iterate=head;
     printf("enter the value of pos");
     scanf("%d",&pos);
     for(int i=1;i<=pos-1;i++)
     {
         if(iterate!=NULL)
         {

             iterate=iterate->next;
         }else
         {
             printf("could't find the pos");
             break;

         }
           if(iterate!=NULL)
           {
             temp->next=iterate->next;
             iterate->next=temp;

           }
     }
           display();

     }



 void deletebeg()
 {
     temp=head;
     head=head->next;
     free(temp);
     display();
 }
 void deleteend()
 {
     temp=head;
     while(temp->next!=tail)
     {
         temp=temp->next;
     }
     temp->next=NULL;
     free(tail);
     tail=temp;
     display();

 }
 void deletepos()
 {
    struct node* iterate=NULL;
    int pos;
    iterate=temp=head;
    printf("enter the value");
    scanf("%d",&pos);
    for(int i=1;i<=pos-1;i++)
    {
        if(iterate!=NULL)
        {
         temp=iterate;
         iterate=iterate->next;

        }
        else
        {

            printf("Cannot be determined");
            break;
        }
    }
    iterate->next=temp->next;

    free(temp);
    display();
 }

void display()
{

    if(head==NULL)
    {
        printf("the list is empty");

    }
    else
    {
   //temp=(struct node*)malloc(sizeof(struct node));
    temp=head;
        while(temp!=NULL)
        {
            printf("%d",temp->data);
            temp=temp->next;
        }

    }
}
