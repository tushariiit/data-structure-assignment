#include<stdio.h>
#include<stdlib.h>
struct node
{
    int *arr;
    int front;
    int rear;
    int cap;
}*q;
void creation(int n)
{
    q->arr=(int *)malloc(n*sizeof(int));
    q->front=-1;
    q->rear=-1;
    q->cap=n;
}
 int push()
{
    int m=q->rear+1;
    if(m==q->cap)
    {
    printf("RECORD IS FULL NOW!");
   return;
    }
    else
    {
    q->rear=(q->rear+1)%q->cap;
    printf("Enter data=");
    scanf("%d",&q->arr[q->rear]);
    }
}
int pop()
{
    if(q->rear==-1)
    {

    printf("RECORD IS EMPTY");
    }
    else
    {
    q->front=(q->front+1)%q->cap;
    printf("Entered data=%d\n",q->arr[q->front]);
    q->rear--;
    }
}
void main()
{
 int size;
 printf("Enter size of queue=");
 scanf("%d",&size);
 q=(struct node*)malloc(sizeof(struct node));
 creation(size);
 int k;
 for(int a=0;a>=0;a++)
 {
     printf("Enter any number=");
     scanf("%d",&k);
    if(k==0)
    break;
    else
    {
    int choice;
    printf("Enter 1 for push() and 2 for pop()=");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
       {
        push();
        break;
       }
    case 2:
      {
        pop();
        break;
      }
    default:
        {
            printf("Wrong entry=");
        }
    }
   }
  }
}
