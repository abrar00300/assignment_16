#include<stdio.h>
int main()
{
    int a[3][3],sum=0,i,j;
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
            if((i==1 && j==1)||(i==2 && j==0)||(i==0 && j==2))
                sum=sum+a[i][j];
        }
    }
    printf("\n\nsum of right diagonal of matrix is = %d",sum);
    return 0;
}
