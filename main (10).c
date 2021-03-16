#include<stdio.h>
main()
{
    int a[50],i,p,temp,n;
    printf("how many element you wanna sort\n");
    scanf("%d",&n);
    printf("enter the element\n");
    for (i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for (p=1; p<n; p++)
    {
        for (i=0; i<n-p; i++)
        {
            if (a[i]>a[i+1])
            {
                temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }
        }
    }
    printf("In ascending :\n");
    for (i=0; i<n; i++)
    {
        printf("%d\n",a[i]);
    }
    getch();
}
