#include<stdio.h>

int factorial(int x);
int main()
{
    int a;
    printf("enter the value\n");
    scanf("%d",&a);   
    printf("the factorial of %d is %d\n",a,factorial(a));
    
    return 0;
}

int factorial(int x)
{
    if (x==0 || x==1){
    return 1;
    }
    else
    return x * factorial(x-1);
}
