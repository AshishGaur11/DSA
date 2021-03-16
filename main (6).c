//#define max 10
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int front=-1;
int rear=-1;
int q[10];
int i;
void insertCQ();
void delCQ();
void displayCQ();
main()
{
    int ch=0;
    printf("this is a program for queue>>\n");
    while(ch!=4)
    {

        printf("\n1 for insertCQ\n");
        printf("2 for delCQ\n");
        printf("3 for displayCQ\n");
        printf("4 for exit\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: insertCQ(); break;
            case 2: delCQ(); break;
            case 3: displayCQ(); break;
           default: printf("\nI am Sorry, Thats not a valid Choice!!");
        }
    }
    printf("\nBye Bye You have quit");
}
void insertCQ()
{
    if ((front==0&&rear==9)||(front==rear+1))
    {
        printf("overflow insertion NP");
    }
    else
    {
        if (front==-1)
        {
            rear=front=0;
        }
        else if (rear==9&&front!=0)
        {
            rear=0;
        }
        else
        {
            rear++;
        }
        printf("enter the value\n");
        scanf("%d",&q[rear]);
    }
}
void delCQ()
{
    if (front==-1)
    {
        printf("UNDERFLOW");
    }
    else
    {
        printf("%d removed",q[front]);
        if (front==rear)
            front=rear=-1;
        else if (front==9)
            front=0;
        else
            front++;
    }
}
void displayCQ()
{
    if (front<=rear)
    {
        for(i=front; i<=rear; i++)
            printf("%d\t",q[i]);
    }
    else
    {
        for(i=front; i<=9; i++)
            printf("%d\t",q[i]);
        for(i=0; i<=rear; i++)
            printf("%d\t",q[i]);
    }
}

