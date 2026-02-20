#include<stdio.h>
#include<stdlib.h>
#define N 5

int isfull();
int isempty();
void addrear(int item);
void addfront(int item);
void popfront();
void poprear();
void display();

int front=-1,rear=-1;
int Q[N];
int main()
{
int choice,item;
printf("\nOperations : \n1.addrear\n2.addfront\n3.poprear\n4.popfront\n5.display\n6.exit");

do{
printf("\nEnter Your choice:");
scanf("%d",&choice);

switch(choice)
{

case 1: 
printf("\nenter item :");
scanf("%d",&item);
addrear(item);
break;

case 2:
printf("Enter item");
scanf("%d",&item);
addfront(item);
break;

case 3:
poprear();
break;

case 4:
popfront();
break;

case 5:
display();
break;

case 6:
exit(0);
break;

default:
printf("\n Enter valid choice");
}
}while(choice!=6);

return 0;
}

int isfull()
{
if((front==0 && rear==N-1 ) || front==rear+1)
return 1;

else 
return 0;
}

int isempty()
{
    if(front==-1)
    return 1;
    else 
    return 0;

}

void addrear(int item)
{

if(isfull())
{
    printf("Q overflow");
    return;
}

else if(isempty())
{
    front=rear=0;
    Q[rear]=item;
}

else if(rear==N-1)
{

    rear=0;
    Q[rear]=item;
}
else
{
    rear++;
    Q[rear]=item;
}

}




void addfront(int item)
{

if(isfull())
{
    printf("Q overflow");
    return;
}

else if(isempty())
{
    front=rear=0;
    Q[front]=item;

}

else if(front==0)
{
    front=N-1;
    Q[front]=item;

}
else{
    front--;
    Q[front]=item;
}

}


void poprear()
{
if(isempty())
{
printf("Queue underflow");
return;
}

else if(rear==front)
{
   printf("%d is popper from Queue",Q[rear]);
   rear=front=-1; 
}


else if(rear==0)
{

printf("%d is popper from Queue",Q[rear]);
rear=N-1;
}



else
{
printf("%d is popper from Queue",Q[rear]);
rear--;

}
}


void popfront()
{
if(isempty())
{
printf("Queue underflow");
return;
}

else if(rear==front)
{
printf("%d is popper from Queue",Q[front]);
front=rear=-1;
    
}
else if(front==N-1)
{
printf("%d is popper from Queue",Q[front]);
front=0;
}

else
{
printf("%d is popper from Queue",Q[front]);
front++;
}
}



void display()
{

if(isempty())
{
    printf("Queue underflow");
    return;

}
else{
int i=front;

while(i!=rear)
{

printf("%3d",Q[i]);
i=(i+1)%N;

}
printf("%3d",Q[rear]);

}

}