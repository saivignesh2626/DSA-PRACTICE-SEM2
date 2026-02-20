#include<stdio.h>
#include<ctype.h>
#include<string.h>
#define N 50
int stack[N];
int top=-1;
void push(int item);
char pop();
int main()
{
int len;
char postfix[N];
char a,b;

printf("Enter posfix Expression : ");
scanf("%s",postfix);

len=strlen(postfix);

    for(int i=0;i<len;i++)
    {

        if(isalnum(postfix[i]))
        {
            push(postfix[i]-'0');
        }

        else 
        {

            b=pop();
            a=pop();

            switch(postfix[i])
            {
                case '+': push(a+b);
                            break;
            
            case '-': push(a-b);
                            break;

            case '*': push(a*b);
                            break;

            case '/': push(a/b);
                            break;

            case '%': push(a%b);
                            break;
            }

  

        }


    }

printf("Final Answer is : %d",pop());

return 0;
}

void push(int item)
{
    stack[++top]=item;    

}

char pop()
{
    return stack[top--];
}