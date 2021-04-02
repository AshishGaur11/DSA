
#include<string.h>

main()
{
    int q,length,k,n=5,m=6,i,j,S[100][100],C[100][100];
    char  X[100], Y[100], R[100];
    printf("Enter sequence one--\n");
    scanf("%s",X);
    printf("Enter sequence two--\n");
    scanf("%s",Y);
    n=strlen(X);
    m=strlen(Y);
    for (i=0; i<=n; i++)
    {
        C[i][0] = 0;
        S[i][0] = 0;
    }
    for (j=0; j<=m; j++)
    {

        C[0][j] = 0;
        S[0][j] = 0;
    }
    for (i=1; i<=n; i++)
    {
       for (j=1; j<=m; j++)
       {
            if (X[i-1] == Y[j-1])
            {
                C[i][j]=C[i-1][j-1]+1;
                S[i][j]=1;
            }
            else
            {
                if (C[i-1][j]>C[i][j-1])
                {
                    C[i][j]=C[i-1][j];
                    S[i][j]=2;
                }
                else
                {
                    C[i][j]=C[i][j-1];
                    S[i][j]=3;
                }
            }
       }
    }
    printf("MATRIX FOR LCS \n");
    for (i=0; i<=n; i++)
    {
        printf("\n");
       for (j=0; j<=m; j++)
       {
            printf("%d\t",C[i][j]);
       }
    }
    printf("\n\n\n");
    printf("MATRIX FOR DIRECTION 1 FOR ^**, 2 FOR <--, 3 FOR ^|  \n");
    printf("\n\n\n");
    for (i=0; i<=n; i++)
    {
        printf("\n");
       for (j=0; j<=m; j++)
       {
            printf("%d\t",S[i][j]);
       }
    }
    i=n;
    j=m;
    k=0;
    length=C[n][m];
    while (i>0 && j>0)
    {
        if (S[i][j]==1)
        {
            R[k]=X[i-1];
            i--;
            j--;
            k++;
        }
        else if (S[i][j]==2)
        {
            i--;
        }
        else
        {
            j--;
        }
    }
    printf("\n\n\n");
    printf("This is the LCS");
    for (i=length-1; i>=0; i--)
    {
        printf("\n%c",R[i]);
    }
    printf("\n\n\n");

    printf("For repeat 1/0 ?\n");
    scanf("%d",&q);
    if (q==1)
    {
        main();
    }
    else if (q==0)
    {
    printf("Good bye!!");
    }
}
