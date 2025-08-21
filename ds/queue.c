#include <stdio.h>
#include <stdlib.h>

#define MAX 6

int queue[MAX];
int front = -1;
int rear = -1;

void enque(int value)
{
    if(rear==MAX-1)
    {
        printf("queue overflow");
        return;
    }
    if(front==-1){
        front=0;
    }
    rear++;
    queue[rear]=value;
    printf("%d enqued",value);
}
void deque()
{
    if(front==-1 || front>rear)
    {
        printf("queue underflow");
    }
    else
    {
    int x=queue[front];
    front++;
    printf("The value dequed is %d",x);
    }

}
int main()
{
    int n;
    while (1) {
        printf("\n1. enqueue  2. dequeue  3. Exit\n");
        scanf("%d", &n);
        switch (n) {
            case 1: {
                int value;
                printf("Enter value: ");
                scanf("%d", &value);
                enque(value);
                break;
            }
            case 2:
                deque();
                break;
            case 3:
                exit(0);
            default:
                printf("Invalid choice\n");
        }
    }
    return 0;
}
