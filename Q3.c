#include<stdio.h>
int main()
{
    int a[3][3],i,j,b[3][3];
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
        for(j=0;j<3;j++)
        {
            b[i][j]=a[j][i];
        }
    }
    printf("transpose of matrix is = \n");
     for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
    return 0;
}
