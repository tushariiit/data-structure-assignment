#include<stdio.h>
#include<stdlib.h>
struct node{
    struct node *prev;
    int data;
    struct node *next;
}*head,*temp;
create()
{
    int n;
    head=0;
    printf("enter the no of nodes:");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        struct node *newnode=(struct node*)malloc(sizeof(struct node));
        printf("enter data:");
        scanf("%d",&newnode->data);
        newnode->prev=0;
        newnode->next=0;
        if(head==0)
        {
            head=temp=newnode;
        }
        else
        {
            temp->next=newnode;
            newnode->prev=temp;
            temp=newnode;
        }

    }
    printf("created\n");
    temp=head;
}
disp(struct node *temp)
{
    while(temp!=0)
    {
        printf("%d\n",temp->data);
        temp=temp->next;
    }
}
del(struct node *temp)
{
    int i,n;
    printf("enter the node which u want to delete:");
    scanf("%d",&n);
    if(n==1)
    {
        temp=temp->next;
        disp(temp);
    }
    else
    {
        while(i=1<n)
        {
            temp=temp->next;
            i++;
        }
        temp->prev->next=temp->next;
        temp=head;
    disp(temp);
    }

}
int main()
{
    create();
    temp=head;
    disp(temp);
    temp=head;
   del(temp);
}

