#include<stdio.h>
int main()
{
    int a[3][3],b[3][3],c[3][3],i,j;
    printf("enter elemnts for 1st array =\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("enter (%d,%d) elents  =",i+1,j+1);
            scanf("%d",&a[i][j]);
            c[i][j]=0;
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
    printf("\nenter elemnts for 2nd array=\n");
     for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("enter (%d,%d) elemnts  =",i+1,j+1);
            scanf("%d",&b[i][j]);
        }
    }
     for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            for(int k=0;k<3;k++)
                c[i][j]=a[i][k]*b[k][j]+c[i][j];
        }
    }
    printf("product of two matrix is = \n ");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            printf("%d\t",c[i][j]);
         printf("\n");
    }
    return 0;
}
