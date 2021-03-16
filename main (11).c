#include<stdio.h>
main()
{
    int a[50],j,i,temp,n,min,k;
    printf("How many element you wanna sort\n");
    scanf("%d",&n);
    printf("Enter the element section sorting\n");
    for (i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for (i=0; i<n-1; i++)
    {
        min=a[i]; k=i;
        for (j=i+1; j<n; j++)
        {
            if (a[j]<min)
            {
                min=a[j];
                k=j;
            }
        }
        temp=a[i];
        a[i]=a[k];
        a[k]=temp;
    }
    printf("in ascending :\n");
    for (i=0; i<n; i++)
    {
        printf("%d\n",a[i]);
    }
    getch();
}
