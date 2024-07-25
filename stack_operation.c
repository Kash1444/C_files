#include<stdio.h>
#include<stdlib.h>

#define SIZE 10
int top = -1, inp_array[SIZE];

void push();
void pop();
void show();

int main()
{
    int choice;
    while(1)
    {
        printf("\n----------------------------");
        printf("\nPerform operation on the stack: ");
        printf("\n1.Push the element \n2.Pop the element \n3.Show the element(s) \n4.Exit");
        printf("\n----------------------------");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                push();
                break;

            case 2:
                pop();
                break;

            case 3:
                show();
                break;

            case 4:
                exit(0);

            default:
                printf("Enter a valid choice!");
        }
    }    
}

void push()
{
    int x;
    if(top == SIZE -1)
    {
        printf("\nOverflow!");
    }
    else
    {
        printf("\nEnter the element(s) to be entered into the stack: ");
        scanf("%d", &x);
        top = top + 1;
        inp_array[top] = x;
    }
}

void pop()
{
    if(top == -1 )
    {
        printf("\nUnderflow!");
    }
    else
    {
        printf("\nPopped Element: %d",inp_array[top]);
        top = top - 1;
    }
}

void show()
{
    if(top == -1)
    {
        printf("\nUnderflow!");
    }
    else
    {
        printf("\nElements present in the stack:\n");
        for (int i = top; i >= 0; i--)
        {
            printf("%d ",inp_array[i]);
        }
    }
}