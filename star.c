#include<stdio.h>
int pattern(int n);
int main()
{
    // int i,j,row;
    // printf("enter the no of rows\n");
    // scanf("%d",&row);
    // for ( i = 1; i <=row; i++)
    // {
    //     for ( j = 1; j <=i; j++)
    //     {
    //         printf("*");
    //     }
    //     printf("\n");
    // }
    int n;
    printf("enter the no of rows\n");
    scanf("%d",&n);
    pattern(n);
 return 0;
}
int pattern(int n)
{
    if(n==0)
    {
        return 0;
    }
    else
    {
        pattern(n-1);
        for(int i=1;i<=(2*n-1);i++)
        printf("*");

    }
    printf("\n");
}