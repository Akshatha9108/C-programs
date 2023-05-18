#include <stdio.h>



/**     function    :   linearSearch()
    to search an element.
**/
int linearSearch(int *a,int n)
{
    int i,pos=-1;

    for(i=0;i< n; i++)
    {
        if(a[i]==n)
        {
            pos=i;
            break;
        }
    }
    return pos;
}

int main()
{
    int i,n,arr[300];
    int num;     /* element to search*/
    int position;
    printf("Enter the number of elements in array\n");
    scanf("%d",&n);

    printf("\nEnter array elements:\n");
    for(i=0;i< n;i++)
        scanf("%d",&arr[i]);

    printf("\nNow enter element to search :");
    scanf("%d",&num);

    /* calling linearSearch function*/

    position=linearSearch(arr,num);

    if(num==-1)
        printf("Element not found.\n");
    else
        printf("Element found at %d position.\n",position);

    return 0;
}
