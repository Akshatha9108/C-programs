#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define MAX 3
int a[MAX];
int top=-1;
void push();
void pop();
void display();


int main()
{
    int ch;
    while(1)
    {
        printf("\nEnter the choice:\n1.push 2.pop 3.display 4.exit\n");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1 :
            push();
            break;
        case 2 :
            pop();
            break;

        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;
        default:
            printf("Enter a Valid choice:");
            break;
        }
    }
    return 0;
    }
    void push()
    {
        if(top==MAX-1)
        {
            printf("Stack overflow\n");
            return;
        }
        else
        {
            int n;
            printf("Enter the Element to be pushed:");
            scanf("%d",&n);
            top++;
            a[top]=n;
        }
    }
    void pop()
    {
        if(top==-1)
        {
            printf("Stack Underflow");
            return;
        }
        else
        {
            int n;
            n=a[top];
            top--;
            printf("Poped element is %d\t",n);
        }
    }
    void display()
    {
        int i;
        for(i=0; i<=top; i++)
            printf("%d\t",a[i]);
    }

