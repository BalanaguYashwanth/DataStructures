#include<stdio.h>
#include<stdlib.h>
struct node
{
  int data;
  struct data* next
}*front=NULL,*rear=NULL,*temp=NULL;

void insertend()
{
    struct node* temp=NULL;
    temp=(struct node*)malloc(sizeof(struct node));
    printf("Enter the data");
    scanf("%d",&temp->data);
    temp->next=NULL;

    if(front==NULL)
    {
        front=rear=temp;
    }
    else
    {
        rear->next=temp;
        rear=temp;
        rear->next=NULL;
        free(temp);
    }

}

void deletefront()
{
    temp=front;
    front->next=front;
    free(temp);
}
int main()
{
    int choose;
    printf("1.Insertend\n 2.Deletionfornt");
    scanf("%d",&choose);
    if(choose==1)
        insertend();
}

