#include<stdio.h>
int main()
{
int n,temp;

printf("\nEnter Size of array : ");
scanf("%d",&n);

int num[n];

printf("Enter %d numbers",n);
for(int i=0;i<n;i++)
scanf("%d",&num[i]);

for(int i=0; i<=(n-1)/2 ; i++)
{

temp=num[i];
num[i]=num[n-1-i];
num[n-1-i]=temp;

}

printf("Array : ");
for(int i=0;i<n;i++)
printf("%d",num[i]);

return 0;
}