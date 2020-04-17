#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node *next;
}*head,*newnode,*temp;
int create()
{
    int i,n;
    head=0;
    printf("enter no of nodes:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("enter data:");
        scanf("%d",&newnode->data);
        newnode->next=0;
        if(head==0)
        {
            head=temp=newnode;
        }
        else
        {
            temp->next=newnode;
            temp=newnode;
        }
    }
    temp=head;
    printf("created\n");
    return 0;
}
int display(struct node *temp)
{
    while(temp!=0)
    {
        printf("%d\n",temp->data);
        temp=temp->next;
    }
    return 0;
}
int del(struct node *f)
{
    int i,n;
    struct node *temp1,*temp2,*temp3;
    printf("enter the node u want to delete:");
    scanf("%d",&n);
    temp1=f;
    temp2=f;
    temp3=f;
    if(n==1)
    {
       for(i=1;i<n+1;i++)
        {
            temp3=temp3->next;
        }
        f=temp3;
    }
    else
    {
        for(i=1;i<n+1;i++)
        {
            temp1=temp1->next;
        }
        for(i=1;i<n-1;i++)
        {
            temp2=temp2->next;
        }
        temp2->next=temp1;
    }
    while(f!=0)
{
    printf("%d\n",f->data);
    f=f->next;
}
return 0;

}
int main()
{
    create();
    temp=head;
    display(temp);
    temp=head;
    del(temp);
    return 0;
}
