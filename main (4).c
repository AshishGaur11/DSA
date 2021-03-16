#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{

    int info;
    struct node *next;
};
struct node *front=NULL;
struct node *rear=NULL;
void enque();
void deque();
void display();
void search();
main()
{
    int ch=0;
    printf("this is a prog for FIFO>>\n");
    while(ch!=5)
    {

        printf("\n1 for enque\n");
        printf("2 for deque\n");
        printf("3 for display\n");
        printf("4 for for search\n");
        printf("5 for exit\n");
;        scanf("%d",&ch);
        switch(ch)
        {
            case 1: enque(); break;
            case 2: deque(); break;
            case 3: display(); break;
            case 4: search(); break;
            default: printf("invalid Input");
        }
    }
}
void enque()
{
struct node *ptr=NULL;
ptr=(struct node*)malloc(sizeof(struct node));
printf("enter the new values\n");
scanf("%d",&ptr->info);
ptr->next=NULL;
if (front==NULL)
{
front=rear=ptr;
}
else
{
ptr->next=rear;
rear=ptr;
}
}
void deque()
{
struct node *pt=rear;
struct node *x=front;
if (front==NULL)
{
printf("thats not possible UNDERFLOW");
}
else if(front==rear)
{
front=rear=NULL;
free(x);
}
else
{
while (pt->next!=front)
pt=pt->next;
front=pt;
pt->next=NULL;
free(x);
}
}
void display()
{
struct node *pt=rear;
printf("here are the all values\n");
while(pt!=NULL)
{
printf("%d\n",pt->info);
pt=pt->next;
}
}
void search()
{
struct node*pt=rear;
int g,fl=0,co=0;
printf("what you to search\n");
scanf("%d",&g);
while(pt!=NULL)
{
co++;
if (pt->info==g)
{
printf("found at position%d",co);
fl=1;
}
pt=pt->next;
}
if (fl==0)
printf("not found");
}
