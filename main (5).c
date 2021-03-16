#define max 10
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int front=-1;
int rear=-1;
int i,q[10];
void enque();
void deque();
void display();
main()
{
    int ch=0;
    printf("this is a program for queue>>\n");
    while(ch!=4)
    {

        printf("\n1 for enque\n");
        printf("2 for deque\n");
        printf("3 for display\n");
        printf("4 for exit\n");
;        scanf("%d",&ch);
        switch(ch)
        {
            case 1: enque(); break;
            case 2: deque(); break;
            case 3: display(); break;
           default: printf("its OK you quit!!");
        }
    }
}
void enque()
{
int k;
if (rear==max-1&&front!=0)
{
printf("this is vartual overflow\n");
k=0;
for (i=front; i<=rear; i++)
{
q[k]=q[i];
k++;
}
front=0;
rear=k-1;
printf("although enter the values\n");
rear++;
scanf("%d",&q[rear]);
}
else if (rear==max-1)
printf("OVERFLOW");
else if (front==-1)
{

    front=rear=0;
    printf("enter the value\n");
    scanf("%d",&q[rear]);

}
else {
printf("enter the value\n");
rear++;
scanf("%d",&q[rear]);}

}
void deque()
{
if (front==-1)
{
printf("UNDERFLOW");
}
else
{
printf("%d removed",q[front]);
front++;
}
}
void display()
{
printf("here are your values\n");
printf("FRONT\n");
for (i=front; i<=rear; i++)
{
printf("%d\n",q[i]);
}
printf("REAR");
}

