#include <stdio.h>
#include <stdlib.h>

int max(int a[100], int n)
{
    int i;
    int max =a[0];
    for(i=1; i<=n-1; i++)
    {
        if(a[i]>max)
            max=a[i];
    }
    printf("max element is %d",max);
}
int main()
{
    int n, a[100],i;
    printf("enter the size of array");
    scanf("%d",&n);
    printf("enter elements of array");
    for(i=0; i<n; i++)
        scanf("%d",&a[i]);
    max(a,n);
}
