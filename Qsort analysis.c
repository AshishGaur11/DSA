#include<stdio.h>
#include<conio.h>
void quicksort(int [], int, int);
int partition(int [], int, int);
main()
{
    int a[50],i,n;
    printf("How many element you wanna sort\n");
    scanf("%d",&n);
    printf("Enter the element section sorting\n");
    for (i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    quicksort(a,0,n-1);
    for (i=0; i<n; i++)
    {
        printf("%d\n",a[i]);
    }
    getch();
}
void quicksort(int a[], int low, int high)
{
    int j;
    printf("Low=%d and High=%d\n",low,high);
    if (low<high)
    {
        j=partition(a, low,high);
        printf("\nj=%d",j);
        quicksort(a, low,j-1);
        quicksort(a, j+1,high);
    }
}

int partition(int a[],int l,int h)
{
    int p,i=l+1,j=h,temp;
    p=a[l];
    while (i<j)
    {
        while (a[i]<p) i++;
        while (a[j]>p) j--;
        if (i<j)
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
    temp=a[l];
    a[l]=a[j];
    a[j]=temp;
    return (j);
}
