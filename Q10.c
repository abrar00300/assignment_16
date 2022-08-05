#include<stdio.h>
int main()
{
    int a[3][3],i,j;
    printf("enter 0 or 1 \n");
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
    int cnt=0,jj=0,r;
    for(i=0;i<3;i++)
    {
        cnt=0;
        for(j=0;j<3;j++)
        {
            if(a[i][j]==1)
                cnt++;
        }
        if(cnt>jj)
            {
                r=i;
                jj=cnt;
            }
    }
    printf("Row with the maximum no of 1s is %d",r+1);
    return 0;
}
