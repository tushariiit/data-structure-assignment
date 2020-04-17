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
int nlc(struct node* root)
{
    if (root == NULL || (root->left == NULL &&
                         root->right == NULL))
        return 0;
     return 1 + nlc(root->left) +
               nlc(root->right);
}

int lc(struct node* node)
{
  if(node == NULL)
    return 0;
  if(node->left == NULL && node->right==NULL)
    return 1;
  else
    return lc(node->left)+
        lc(node->right);
}
int main()
{
    struct node *root=create();
struct node *t=root;
printf("Root child is %d\n ",t->data);
printf("the no of leaf nodes are:%d\n",lc(t));
printf("the no of non leaf nodes are:%d",nlc(t));
return 0;
}
