#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
    struct node * prev;
    int info;
    struct node * next;
};
void insert_DLL();
void del();
void display();
struct node *start=NULL;
void main()
{
    int ch=0;

    while(ch!=4)
    {
        printf("\nNow we have a Menu for DLL (double linked list) \n");
        printf("1 for insert DLL\n");
        printf("2 for del\n");
        printf("3 for display\n");
        printf("4 for for exit\n");
        printf("please enter your choice below\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: insert_DLL(); break;
            case 2: del(); break;
            case 3: display(); break;
            default: printf("invalid Input");
        }
    }
}
void insert_DLL()
{
    struct node *ptr=NULL;
    struct node *x=NULL;
    struct node *y=NULL;
    int pos=0,i;

    ptr=(struct node*)malloc(sizeof(struct node));
    printf("Enter the value:");
    scanf("%d",&ptr->info);
    ptr->next=NULL;
    ptr->prev=NULL;
    if (start==NULL)
    {
        printf("This is your first node of LL\n");
        start=ptr;
    }
    else
    {
        printf("Enter the position\n");
        scanf("%d",&pos);
        if(pos==1)
        {
            ptr->prev=ptr;
            ptr->next=start;
            start=ptr;
        }
        else
        {
            x=start;
            for (i=1; i<pos-1; i++)
            {
                x=x->next;
                if (x==NULL) break;
            }

            if (x!=NULL)
            {
                y=x->next;

                ptr->prev=x;
                ptr->next=y;
                x->next=ptr;
                if(y!=NULL)
                    y->prev=ptr;
            }
            else
            {
                printf("Invalid pos\n");
            }
        }
    }
}
void display()
{
    struct node *pt=start;
    printf("The linked List is as below\n\n");
    while (pt!=NULL)
    {
        printf("%d\t",pt->info);
        pt=pt->next;
    }
}
void del()
{
    int pos=0,i;
    struct node * x=NULL;
    struct node * y= NULL;
    struct node * z= NULL;
    printf("Enter the position\n");
    scanf("%d",&pos);
    if (start==NULL)
        printf("this is under flow\n");
    else
    {
        y=start;
        for (i=1; i<pos; i++)
        {
            y=y->next;
            if(y==NULL) break;
        }
        if (y!=NULL)
        {
            x=y->prev;
            z=y->next;
            if (pos==1)
            {
                start=start->next;
                if(start!=NULL)
                    start->prev=NULL;
                free(y);
            }
            else
            {
                x->next=z;
                if (z!=NULL)
                    z->prev=x;
                free(y);
            }
        }
        else    printf("Invalid Position");
    }
}
