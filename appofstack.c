#include <stdio.h>
#include <conio.h>
int top=-1;
int stack[10];
void push(int);
int pop();
main()
{
  int a[10],i,n;
  printf("how many elements are there gonna be ?\n");
  scanf("%d",&n);
  printf("enter the value please...\n");
  for (i=0; i<n; i++)
{
    scanf("%d",&a[i]);
}
for (i=0; i<n; i++)
{
    push(a[i]);
}
for (i=0; i<n; i++)
{
    a[i]=pop();
}
printf("the reverse is here !\n");
for (i=0; i<n; i++)
{
    printf("%d\n",a[i]);
}
printf("got It!");
getch();
}
void push(int x)
{
    if (top<9)
    {
        top++;
        stack[top]=x;
    }
    else
    {
        printf("error\n");
    }
}
int pop()
{
    int x;
    if (top!=-1)
    {
        x=stack[top];
        top--;
        return(x);
    }
    else
    {
        printf("error");
    }
}
