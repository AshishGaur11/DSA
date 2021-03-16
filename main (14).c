#include <stdio.h>
#include <stdlib.h>
void merging(int,int,int);
//void merge_sort(int,int);
int a[50];
main()
{
    int i,n;
    printf("How many element you wanna sort\n");
    scanf("%d",&n);
    printf("Enter the element merge sorting\n");
    for (i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    merging(0,3,6);
    for (i=0; i<n; i++)
    {
        printf("%d\t",a[i]);
    }
    getch();
}
/*void merge_sort(int low, int high)
{
    //int mid;
    //printf("low=%d, high=%d\n",low,high);
    if(low<high)
    {
        int mid=(low+high)/2;
        merge_sort(low,mid);
        merge_sort(mid+1,high);
        //printf("Now calling merging low=%d, mid=%d high=%d\n",low,mid,high);
        merging(low,mid,high);
    }
}*/
void merging(int l,int m,int h)
{
    int i=l,j=m+1,k=0,b[50];
    while(i<=m && j<=h)
    {
        if (a[i]<=a[j])
            {b[k]=a[i];i++;k++;}
        else
            {b[k]=a[j];j++;k++;}
    }
    if (i>m)
    {
        while (j<=h)
        {
            b[k]=a[j];j++;k++;
        }
    }
    else
    {
        while (i<=m)
        {
            b[k]=a[i];i++;k++;
        }
    }
    k=0;
    for (i=l; i<=h; i++)
    {
        a[i]=b[k];i++;k++;
    }

}


