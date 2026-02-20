#include<stdio.h>
#include<string.h>
#define N 50
char stack[N];
int top=-1;
int balanced=1;
void push(char ch);
char pop();
int main()
{
    int limit;
    char ch;
    char exp[N];

    printf("Enter expression:");
    scanf("%s",exp);

limit=strlen(exp);

for(int i=0;i<limit;i++)
{

    if(exp[i] == '(' || exp[i] == '[' || exp[i] == '{' )
    {
        push(exp[i]);
    }   

    else if(exp[i] == ')' || exp[i] == ']' || exp[i] == '}')

    {
            if(top==-1)
            {
                balanced=0;
                break;
            }

            else
            {
                ch=pop();

                if( (ch== '(' && exp[i] == ')') || (ch== '{' && exp[i] == '}')   || (ch== '[' && exp[i] == ']')   )
                {

                }
                else
                {
                    balanced=0;
                    break;
                }
            }

    }

}

if(top!=-1)
{
    balanced=0;
}

if(balanced)
{
    printf("Expression is balanced");
}

else
printf("Expression is not balanced");
 
return 0;
}

void push(char ch)
{
    stack[++top]=ch;
} 

char pop()
{
    return stack[top--];
}

