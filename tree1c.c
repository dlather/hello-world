#include<stdio.h>


struct node
{
    int data;
    struct node *left=NULL;
    struct node *right=NULL;
};

void inorder(struct node *t)
{
    if(t!=NULL)                                                          //Or if(t)  if t is pointing to something it will not be zero or null
    {
        inorder(t->left);
        printf("%d\n",t->data);
        inorder(t->right);
    }
}

int main(void)
{

    return 0;
}
