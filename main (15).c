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
void inorder(struct node *);
void preorder(struct node *);
void postorder(struct node *);

int main()
{
    int ch=0;

    while(ch!=6)
    {
        printf("\nNow we have a Menu for BST (binary search tree) \n");
        printf("1 for insert BST\n");
        printf("2 for del\n");
        printf("3 for inorder\n");
        printf("4 for preorder\n");
        printf("5 for postorder\n");
        printf("6 for for exit\n");
        printf("please enter your choice below\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: insert_BST(); break;
            case 2: del(); break;
            case 3: inorder(root); break;
            case 4: preorder(root); break;
            case 5: postorder(root); break;
            default: printf("invalid Input");
        }
    }
}
void insert_BST()
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
        printf("%d ",r->info);
        inorder(r->r);

    }
}
void preorder(struct node *r)
{

    if (r!=NULL)
    {
        printf("%d ",r->info);
        preorder(r->l);
        preorder(r->r);

    }
}
void postorder(struct node *r)
{

    if (r!=NULL)
    {
        postorder(r->l);
        postorder(r->r);
        printf("%d ",r->info);

    }
}
void del()
{   int item=0;
    struct node*pt=NULL;
    struct node*x=NULL;
    struct node*y=NULL;
    struct node*lst=NULL;
    printf("enter the value to del\n");
    scanf("%d",&item);
    pt=root;
    x=root;
    while (pt->info!=item && pt!=NULL)
    {
        x=pt;
        if (item<pt->info)
            pt=pt->l;
        else
            pt=pt->r;

    }
    if (pt->l==NULL && pt->r==NULL)
    {
        if (x->l==pt)
            x->l=NULL;
        else
            x->r=NULL;
        free(pt);
    }
    else if (pt->l==NULL || pt->r==NULL)
    {
        if (x->l==pt)
        {
            if (pt->l==NULL)
                x->l=pt->r;
            else
                x->l=pt->l;
        }
        else
        {
            if (pt->l==NULL)
                x->r=pt->r;
            else
                x->r=pt->l;
        }
        free(pt);
    }
    else
    {
        y=pt; lst=pt->l;
        while(lst->r!=NULL)
        {
            y=lst;
            lst=lst->r;
        }
        pt->info=lst->info;
        if(y->l=lst) y->l=lst->l;
        else y->r=lst->l;
    }
}
