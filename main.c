#include<stdio.h>
main()
{
int a[50],i,p,t,n;
printf("how many element you wanna sort\n");
scanf("%d",&n);
printf("enter the element\n");
for (i=0; i<n; i++)
{scanf("%d",&a[i]);}
for (p=0; p<n; p++)
{
for (i=p+1; i<n; i++)
{
 if (a[p]>a[i])
{   t=a[p];
    a[p]=a[i];
    a[i]=t;
}
}
}
printf("in ascending :\n");
for (i=0; i<n; i++)
{printf("%d\n",a[i]);}
getch();
}
