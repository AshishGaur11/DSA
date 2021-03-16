#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{

    int info;
    struct node * next;
};
void insert();
void del();
void display();
struct node *start=NULL;
void main()
{
    int ch=0;
    while(ch!=4)
    {

        printf("\n1 for insert\n");
        printf("2 for del\n");
        printf("3 for display\n");
        printf("4 for for exit\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: insert(); break;
            case 2: del(); break;
            case 3: display(); break;
            default: printf("invalid Input");
        }
    }
}
void insert()
{
struct node *ptr=NULL;
struct node *x=NULL;
struct node *y=NULL;
int i=0,pos=0;
ptr=(struct node*)malloc(sizeof(struct node));
printf("\nEnter New Data value that is to be inserted:");
scanf("%d",&ptr->info);
ptr->next=NULL;
if (start==NULL)
{
    printf("this is your first node of LL\n");
    start=ptr;
}
else
{
    printf("enter the position\n");
    scanf("%d",&pos);
    if(pos==1)
    {
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
        y=x->next;
        if (x!=NULL)
        {
            x->next=ptr;
            ptr->next=y;
        }
        else
        {
            printf("invalid pos\n");
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
    int pos,i;
    struct node * x=NULL;
    struct node * y= NULL;
    printf("enter the position\n");
    scanf("%d",&pos);
    if (start==NULL)
        printf("this is under flow\n");
    else if (pos==1)
    {
        x=start;
        start=start->next;
        free(x);
    }
    else
    {
        x=start;
        for (i=1; i<pos-1; i++)
        {
            x=x->next;
            if(x==NULL) break;
        }
        if (x!=NULL)
        {
            y=x->next;
            if (y!=NULL)
            {
                x->next=y->next;
                free(y);
            }
        }
        if (x==NULL||y==NULL)
        {
                printf("invalid position\n");
        }
    }
}
