#include<stdio.h>
int main()
{
int n;
int largest,smallest;

printf("\nEnter Size of array : ");
scanf("%d",&n);

int num[n];

printf("Enter %d numbers",n);
for(int i=0;i<n;i++)
scanf("%d",&num[i]);

largest=smallest=num[0];

for(int i=0;i<n;i++)
{

if(largest<num[i])
largest=num[i];

if(smallest>num[i])
smallest=num[i];

}

printf("%2d %2d ",largest,smallest);

return 0;
}