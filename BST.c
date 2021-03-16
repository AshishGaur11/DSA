#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
struct node
{
  struct node*l;
  int info;
  struct node*r;
};
struct node*root=NULL;
void insert_BST();
void del();
void inorder();
void main()
{
    int ch=0;

    while(ch!=4)
    {
        printf("\nNow we have a Menu for BST (binary search tree) \n");
        printf("1 for insert BST\n");
        printf("2 for del\n");
        printf("3 for inorder\n");
        printf("4 for for exit\n");
        printf("please enter your choice below\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: insert_BST(); break;
            case 2: del(); break;
            case 3: inorder(root); break;
            default: printf("invalid Input");
        }
    }
}
void insert_BST()
{
{
    struct node *ptr=NULL;
    struct node *pt=NULL;
    struct node *x=NULL;
    ptr=(struct node*)malloc(sizeof(struct node));
    printf("Enter the value:");
    scanf("%d",&ptr->info);
    ptr->l=NULL;
    ptr->r=NULL;
    if (root==NULL)
        root=ptr;
    else
    {
        pt=root;
        x=root;
        while (pt!=NULL)
        {
            if (ptr->info<pt->info)
            {
                 x=pt;
                 pt=pt->l;
            }
            else
            {
                x=pt;
                pt=pt->r;
            }
        }
        if (ptr->info<x->info)
            x->l=ptr;
        else
            x->r=ptr;
    }
}
void inorder(struct node *r)
{
    if (r!=NULL)
    {
        inorder(r->l);
        printf("%d",r->info);
        inorder(r->r);

    }
}
void del()
{

}
