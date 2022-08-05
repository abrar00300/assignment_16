#include<stdio.h>
int main()
{
    int a[3][3],i,j;
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
    printf("\nlower triangular of the matrix is -\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if((i==0&&j==1)||(i==0&&j==2)||(i==1&&j==2))
                printf("0\t");
            else
                printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
