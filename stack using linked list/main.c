#include <stdio.h>
#include <stdlib.h>

struct node
{
    int info;
    struct node*link;

};
typedef struct node*NODE;
NODE getnode()
{
    NODE x;
    x=(NODE)malloc(sizeof(struct node));
    return x;
}
NODE insert_front(NODE first,int item)
{
    NODE temp;
    temp=getnode();
    temp->info=item;
    temp->link=first;
    return temp;
}
NODE delete_front(NODE first)
{
    NODE temp;
    if(first==NULL)
    {
        printf("the list is empty");
        return first;
    }
    else
    {
        temp=first;
        printf("Deleted item=%d",temp->info);
        temp=temp->link;
        free(first);
        return temp;
    }
}
void display(NODE first)
{
    NODE temp;
    if(first==NULL)
        printf("The list is empty");
    else
    {
        temp=first;
        printf("the elements are-\n");
        while(temp!=NULL)
        {
            printf("%d",temp->info);
            temp=temp->link;
        }
        printf("\n");
    }
}
int main()
{
    NODE first=NULL;
    int ch,item;
    while(1)
    {
        printf("1.insert 2.delete 3.display 4.exit\n");
        printf("Enter your choice:\t");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                   printf("enter your item:");
                   scanf("%d",&item);
                   first=insert_front(first,item );
                   break;
            case 2:first=delete_front(first);
                   break;
            case 3:display(first);
                   break;
            case 4:exit(0);
        }
    }
    return 0;
}
