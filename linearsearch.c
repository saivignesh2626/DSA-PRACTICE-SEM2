#include<stdio.h>
int main()
{

int list[100];
int n,target,pos,found=0;

printf("Enter Size of Array :");
scanf("%d",&n);

printf("Enter %d numbers:",n);
for(int i=0;i<n;i++)
scanf("%d",&list[i]);

printf("Enter Target:");
scanf("%d",&target);


for(int i=0;i<n;i++)
{

if(list[i]==target)
{
    found=1;
    pos=i+1;
    break;
}

}

if(found)
printf("%d Found at position %d ",target,pos);
else
printf("Not found");

}