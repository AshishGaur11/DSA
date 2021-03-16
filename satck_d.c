#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{

    int info;
    struct node * next;
};
struct node *top=NULL;
void push();
void pop();
void display();
main()
{
    int ch=0;
    while(ch!=4)
    {

        printf("\n1 for push\n");
        printf("2 for pop\n");
        printf("3 for display\n");
        printf("4 for for exit\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: push(); break;
            case 2: pop(); break;
            case 3: display(); break;
            default: printf("invalid Input");
        }
    }
}
void push()
{
    struct node *ptr=NULL;
    ptr=(struct node*)malloc(sizeof(struct node));
    printf("\nEnter New Data value that is to be pushed:");
    scanf("%d",&ptr->info);
    ptr->next=NULL;
    if(top==NULL) top=ptr;
    else
    {
        ptr->next=top;
        top=ptr;

    }
}
void pop()
{
    struct node *x=top;
    if (top==NULL)
    {
        printf("Underflow, Pop is not possible");
    }
    else
    {
        printf("%d removed",top->info);
        top=top->next;
        free(x);
    }
}
void display()
{
    struct node * ptr=top;
    printf("\nThe Stack is as below:\n");
    while(ptr!=NULL)
    {
        printf("%d\n",ptr->info);
        ptr=ptr->next;
    }
    getch();
}
