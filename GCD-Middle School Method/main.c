#include <stdio.h>
#include <stdlib.h>

int mid_school(int m,int n)
{
    int a=2,g=1;
    if(m==0)
        return n;
    if(n==0)
        return m;
    while((m>=a&&m!=0)&&(n>=a&&n!=0))
    {
        if(m%a==0)
        {
            if(n%a==0)
            {
                g=g*a;
                n=n/a;
            }
            m=m/a;
        }
        else
            a++;
    }
    return g;
}
int main()
{
    int m,n,gcd;
    printf("ENter the two numbers m and n:");
    scanf("%d %d",&m,&n);
    gcd=mid_school(m,n);
    printf("The gdc of 2 numbers %d and %d = %d",m,n,gcd);
    return 0;
}
