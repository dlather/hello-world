#include<stdio.h>
struct node{
int data;
struct node* left;
struct node* right;
};
int fact(int x)
{
    if(x<=1)
        return 1;
    else
        return x*fact(x-1);
}
int no_of_tree(int no_nodes)
{
    int no_tree_unlabel,no_tree_label;
    int x=fact(no_nodes);
    no_tree_unlabel=(fact(2*no_nodes))/(x*x)/(no_nodes+1);
    no_tree_label=x*no_tree_unlabel;
    printf("No of trees possible unlabelled :%d\n",no_tree_unlabel);
    printf("No of trees possible labelled :%d\n",no_tree_label);
}

int* preorder_inorder(int n,int *p,int* i)  // n is no of nodes and function returns postorder
{

}
int * postorder_inorder(int n,int* p,int *i)
{

}
int main()
{

    return 0;
}
