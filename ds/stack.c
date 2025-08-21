#include<stdio.h>
#define MAX 10;
int stack[MAX];
int top=-1;
void push(int value)
{
    if(top==MAX)
    {
        printf("overflow");
        return;
    
    }
    else
    {
        top=top+1;
        stack[top]=value;

    }
}
void pop()
{
    if(top==-1)
    {
        printf("underflow");
        return;
    }
    else{
        int x=stack[top];
        top--;
        printf("deleted %d",x);

    }
}
void main()
{
    int n;
    while(1)
    {
        printf("1.push 2.pop 3.exit");
        scanf("%d",&n);
        switch(n)
        {
            case 1: {
                int value;
                printf("enter value");
                scanf("%d",&value);
                push(value);
                break;
            }
            case 2: pop(); break;
            case 3: exit(0);
        }
    }
}