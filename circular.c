#include<stdio.h>
#define N 5
#include<stdlib.h>
int q[N];
void dq();
void nq(int item);
void display();

int r=-1,f=-1;

int main()
{

int item,choice;



do{
printf("\nOperations : \n1.enqueue\n2.dequeue\n3.display\n4.exit\n");
printf("Enter Your choice:");
scanf("%d",&choice);

switch(choice)
{

case 1: 
printf("enter item :");
scanf("%d",&item);
nq(item);
break;

case 2:
 dq();
break;

case 3:
printf("displaying the queue elements :");
display();
break;

case 4:
exit(0);
break;

default :
printf("\nEnter a valid choice");

}//switch

}//do ends
while(choice!=4);

    return 0;
}


void nq (int item)
{

    if(f==(r+1)%N)
    {
    printf("\nQ is Full");
    return;
    }
    else if(r==-1 && f==-1)
    {
    r=f=0;
    q[r]=item;
    }
    else
    {
        r=(r+1)%N;
        q[r]=item;
    }

}

void dq()
{
if(f==-1 && r==-1)
printf("\nQ undeflow");

else if(r==f)
{
    printf("\nDqed element is %d",q[f]);
    r=f=-1;
}

else
{

    printf("\nDqed element is %d",q[f]);
    f=(f+1)%N;

}
}

void display()
{
if(f==-1)
{
    printf("Q is empty");
    return ;
}

int i=f;
printf("\nQueue elemtns are : ");
while(i!=r)
{

printf("%3d",q[i]);
i=(i+1)%N;


}
printf("%3d",q[r]);


}
