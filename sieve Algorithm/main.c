#include <stdio.h>
#include <stdlib.h>

#include <math.h>
int main()
{
    int a[100],b[100],n,i,p,j,k;
    printf("\nEnter the number:");
    scanf("%d",&n);
    if(n>1)
    {
        for(i=2; i<=n; i++)
            a[i]=i;
        for(p=2; p<=sqrt(n); p++)
        {
            if(a[p]!=0)
            {
                j=p*p;
                while(j<=n)
                {
                    a[j]=0;
                    j=j+p;
                }
            }
        }
    }
    i=0;
    for(p=2; p<=n; p++)
    {
        if(a[p]!=0)
        {
            b[i]=a[p];
            i++;
        }
    }
    for(k=0; k<i; k++)
        printf("%d\t",b[k]);
    return(0);
}
