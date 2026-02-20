#include<stdio.h>
#include<stdlib.h>
#define N 5
int stack[N];
int top=-1;

void push(int item);
void pop();
void display();

int main()
{
    int choice,item;

    do
    {   printf("\nOperations:\n1.push\n2.pop\n3.display\n4.exit");
        printf("\nEnter your choice:");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
            printf("\nEnter element :");
            scanf("%d",&item);
             push(item);
            break;

            case 2: 
             pop();
            break;

            case 3:
            display();
            break;

            case 4:
            exit(0);

            default :
            printf("\nEnter a valid number");

        }
    }while(choice!=4);

    return 0;
}

void push(int item)
    {
            if(top==N-1)
            {
                printf("Stack Overflow");
                return;
            }

            else
            {
                stack[++top]=item;
                printf("\n %d is pushed into stack",item);
            }
    }


    void pop()
    {

        if(top==-1)
        {
            printf("Stack Underflow!!");
            return;
        }

        else
        {
            printf("%d is popped from stack",stack[top--]);
        }

    }


    void display()

{

        if(top==-1)
        {
            printf("Stack is Empty");
            return;
        }

        else
        {
           printf("Stack elements:");
           for(int i=top;i>=0;i--) 
           printf("%d\n",stack[i]);

        }

}
