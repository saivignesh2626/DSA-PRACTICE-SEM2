#include<stdio.h>
#define N 5
#include<stdlib.h>
int q[N];
int dq();
void nq(int item);
void display();
int rear=-1,front=-1;
int main (){

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
printf("%d left the queue",dq());
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

void nq(int item)
{

if(rear==-1&&front==-1)
{
    front =0;
    q[++rear]=item;
}

else if(rear==N-1)
printf("QUEUE OVERFLOW");  

else{
    q[++rear]=item;
}

}

int dq()
{
    if(rear==-1 || front>rear)
    {
    printf("Queue Underflow");
    
    }
    else
    {
        return q[front++];
    }

}


void display()
{
if(rear==-1 || front>rear)
    {
    printf("Queue Underflow");
    exit(0);
    }
else{
for(int i=front;i<=rear;i++)
{
printf("%3d",q[i]);
}
}
}

