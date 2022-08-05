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
    int cnt0=0,cntn=0;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",a[i][j]);
            if(a[i][j]==0)
                    cnt0++;
            else
                cntn++;
        }
        printf("\n");
    }
    if(cnt0>cntn)
        printf("the matrix is a Sparse matrix");
    else
        printf("the matrix is not a Sparse matrix");
    return 0;
}
