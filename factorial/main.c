#include <stdio.h>
#include <stdlib.h>

int factorial(int n)
{
    if(n==0)
        return 1;
    return(n*factorial(n-1));
}
int main()
{
    int n,fact;
    printf("enter any number");
    scanf("%d",&n);
    fact=factorial(n);
    printf("%d",fact);
}
