#include<stdio.h>
#include<conio.h>
int top=-1;
int a[20];
void push();
void pop();
void display();
main()
{
    int ch=0;
    while(ch!=4)
    {
        printf("1 for push");
        printf("2 for pop");
        printf("3 for display");
        printf("4 for for exit");
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
    if (top==19)
    {
        printf("push NP possible");
    }
    else
    {
        top++;
        printf("enter the value to be pulled");
        scanf("%d",&a[top]);
    }
}
void pop()
{
    if (top==-1)
    {
        printf("pop is not possible");
    }
    else
    {
        printf("%d removed",a[top]);
        top--;
    }
}
void display()
{
    int i=top;
    for (i=top; i>=0; i++)
    {
        printf("%d\n",a[i]);
    }
    getch();
}
