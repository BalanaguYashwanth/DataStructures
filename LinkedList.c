#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* next;
}*temp=NULL,*head=NULL,*tail=NULL;

int main()
{
    int choose,k=0;
    do{
    printf("\n enter the your choice");
    scanf("%d",&choose);
    switch(choose)
    {
    case 1:
        createnode();
        break;
    case 2:
        pos();
        break;
    case 3:
        deletebeg();
        break;
    case 4:
          deletepos();
          break;
    default:
        deleteend();
    }

}while(k<=5);
}

void createnode()
{
    temp=(struct node*)malloc(sizeof(struct node));
    printf("\n enter the value to be insert");
    scanf("%d",&temp->data);
    temp->next=NULL;

    if(head==NULL)
    {
        head=tail=temp;
        printf("\n node is created");
    }
    else
    {
        temp->next=head;
        head=temp;
        printf("node is created");

    }
display();
}


void pos()
{
    struct node* kosi=NULL;
    int i;
    kosi=head;
    printf("\n enter the pos");
    scanf("%d",&kosi);
    for(i=0;i<=kosi-1;i++)
    {
        if(kosi!=NULL)
        {
            head=tail=temp;

        }
        else
        {
        kosi=kosi->next;
        kosi->next=temp->next;
        kosi->next=temp;

        }
    }
display();
}

void insertend()
{
    if(head==NULL)
    {
        head=tail=temp;

    }
    else
    {
        tail->next=temp;
        tail=temp;
        temp=NULL;

    }
display();
}


void display()
{
    if(head==NULL)
    {
        head=tail=temp;

    }
    else
        {
            temp=(struct node*)malloc(sizeof(struct node));
            temp=head;
            while(temp!=NULL)
            {
                printf("\n %d \t",temp->data);
                temp=temp->next;


            }

     }

}



void deletebeg()
{
    temp=head;
    head->next=head;
    free(temp);
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


void deleteend()
{
    temp=head;
    while(temp->next=!NULL)
    {
        temp=temp->next;
    }
    temp->next=NULL;
    free(tail);
    tail=temp;
    display();
}

