#include<stdio.h>
int main()
{
    int a[3][3],i,j,sum=0;
     for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("enter (%d,%d) elents  =",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<3;i++)
    {
        sum=0;
        for(j=0;j<3;j++)
        {
            sum=sum+a[i][j];
        }
        printf("\nsum  of %d row is =%d\n",i+1,sum);
    }
     for(i=0;i<3;i++)
    {
        sum=0;
        for(j=0;j<3;j++)
        {
            sum=sum+a[j][i];
        }
        printf("\nsum of %d column is =%d\n",i+1,sum);
    }
    return 0;
}
