
#include<math.h>
main()
{
    int s[100][2],i,j,k, n, W=10, p[10], w[10], x[10]={0}, opp,opw, a, b, flag, Z;
    /*INPUT*/
    printf("Enter the number of items\n");
    scanf("%d",&n);
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

    /*processS1*/
    s[0][0] = 0;
    s[0][1] = 0;
    for (i=1; i<=n; i++)
    {
        k=pow(2, i-1);
        Z=pow(2, i-1);
        for (j=0; j<Z; j++)
        {
            s[k][0]=s[j][0]+p[i-1];
            s[k][1]=s[j][1]+w[i-1];
            k++;
        }
    }
    Z=pow(2,n);
    for (i=0; i<Z; i++)
    {
        printf("\n %d %d", s[i][0], s[i][1]);
    }



    opp =0;
    opw =0;
    Z=pow(2,n);
    for(i=1; i<Z; i++)
    {
        if (s[i][0]>=opp && s[i][1]<=W)
        {
            opp = s[i][0];
            opw = s[i][1];
        }
    }
    printf("\nOptimal Solution is %d %d", opp, opw);

    a=opp;
    b=opw;
    for (i=n; i>=1; i--)
    {
        flag =0;
        Z=pow(2,i-1);
        for (j=0; j<Z; j++)
        {
            if (s[j][0] == a && s[j][1] == b)
            {
                flag =1;
            }

        }
         if (flag==0)
            {
                x[i-1]=1;
                a= a - p[i-1];
                b= b - w[i-1];

            }
    }

    for (i=0; i<n; i++)
    {
        printf("\n%d", x[i]);
    }

}
