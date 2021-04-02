#include<stdio.h>
#include<conio.h>
main()
{
    int W, n, in[10]={0,1,2,3,4,5,6,7,8,9}, p[10] ,w[10], i, j, pass, rc;
    float temp, r[10]={0.0}, result[10]={0};
    //clrscr();

    printf("Enter the number of items\n");
    scanf("%d",&n);
    printf("Enter the knapsack capacity \n");
    scanf("%d",&W);
    printf("Enter the profit one by one\n");
    for (i=0; i<n; i++)
    {
        scanf("%d",&p[i]);
    }
    printf("Enter the weight one by one\n");
    for (i=0; i<n; i++)
    {
        scanf("%d",&w[i]);
    }
    //printf("This is the rate\n");
    for (i=0; i<n; i++)
    {
        r[i]= (float) p[i]/w[i]; //Forced type casting ...also read automatic type casting
    }

    for(pass=1; pass<n; pass++)
    {
        for(i=0; i<n-pass; i++)
        {
            j=i+1;
            if (r[i]<r[j])
              {
                temp = r[i];
                r[i] = r[j];
                r[j] = temp;

                temp = in[i];
                in[i] = in[j];
                in[j] = temp;

              }
        }
    }
// The other way of implementation is by swapping weight and profit array value also
    rc = W;
    for (i=0; i<n; i++)
    {
        if (w[in[i]]<rc)
        {
            result[in[i]] = 1;
            rc = rc - w[in[i]];
        }
        /*else
        {

        }*/
    }

  printf("\nThe result is ");
    for (i=0; i<n; i++)
    {
        printf("%1.1f\t",result[i]);
    }

}
