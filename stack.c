#include <stdio.h>
#include <stdlib.h>

#define SIZE 4
int top = -1;
int stack[SIZE];
void push();
void pull();
void show();

int main(void)
{
    int choice;
    while (1)
    {
        printf("Please choose from options (1 for push - 2 for pull - 3 for show - 4 for exit) : ");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
                push();
                break;
            case 2:
                pull();
                break;
            case 3:
                show();
                break;
            case 4:
                exit(0);
            default:
                printf("invalid choice\n");                
        }
    }
    return (0);
}

void push(){
    int x;

    if (top == SIZE - 1)
    {
        printf("Stack overflow\n");
    }
    else
    {
        printf("Enter the element you want to add : ");
        scanf("%d", &x);
        top++;
        stack[top] = x;
    }
}
void pull()
{
    if (top == -1)
    {
        printf("Stack is empty\n");
    }
    else
    {
        printf("the element (%d) has been removed\n", stack[top]);
        top--;
    }
}
void show()
{
    int i;

    if (top == -1)
    {
        printf("Stack is empty, Nothing to be shown\n");
    }
    else
    {
        for (i = top; i >= 0; i--)
        {
            printf("%d\n", stack[i]);
        }  
    }
}

