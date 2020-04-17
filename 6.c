#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *left;
    struct node *right;
};
int create()
{
    int d;
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter data(-1 for empty):");
    scanf("%d",&d);
    if(d==-1)
    {
        printf("u have not entered any data.");
        return NULL;
    }
    else
    {
        newnode->data=d;
        printf("enter data for left child(-1 for empty)\n");
        newnode->left=create();
        printf("enter data for right child(-1 for empty)\n");
        newnode->right=create();
        return newnode;
    }
}
int count(struct node *root)
{
        if(root==NULL)
            return 0;
            else
        return 1 + count(root->left) + count(root->right);
    }
int main()
{
    struct node *root=create();
struct node *t=root;
printf("Root child is %d\n ",t->data);
printf("the no of total nodes are %d",count(t));
return 0;
}

