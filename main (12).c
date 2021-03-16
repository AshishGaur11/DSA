#include<stdio.h>
main()
{
    int a[50],j,i,x,k,n;
    printf("How many element you wanna sort\n");
    scanf("%d",&n);
    printf("Enter the element insertion sorting\n");
    for (i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for (i=0; i<n; i++)
    {
        x=a[i]; j=0;
        while(a[j]<x) j++;
        for (k=i-1; k>=j; k--)
            a[k+1]=a[k];
        a[j]=x;
    }
    for (i=0; i<n; i++)
    {
      printf("%d\n",a[i]);
    }
}

