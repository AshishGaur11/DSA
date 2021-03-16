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
    if (top==19)
    {
        printf("push NP possible");
    }
    else
    {
        top++;
        printf("\nEnter the value to be pushed");
        scanf("%d",&a[top]);
    }
}
void pop()
{
    if (top==-1)
    {
        printf("Underflow, Pop is not possible");
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
    printf("\nThe Stack is as below:\n");
    for (i=top; i>=0; i--)
    {
        printf("%d\n",a[i]);
    }
    getch();
}
