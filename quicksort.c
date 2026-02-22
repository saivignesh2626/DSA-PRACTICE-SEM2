#include <stdio.h>

void quicksort(int arr[],int st,int end);
int partition(int arr[],int st,int end);

int main()
{
    int n;

    printf("Enter Size of Array : ");
    scanf("%d", &n);

    int list[n];

    printf("Enter %d numbers: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &list[i]);

    printf("Array before sort: ");
    for (int i = 0; i < n; i++)
        printf("%2d", list[i]);

    quicksort(list,0,n-1);

    printf("\nArray after sort: ");
    for (int i = 0; i < n; i++)
        printf("%2d", list[i]);

    return 0;
}


void quicksort(int arr[],int st,int end)
{

    if(st<end)
    {
    int pivi=partition(arr,st,end);
    quicksort(arr,st,pivi-1);
    quicksort(arr,pivi+1,end);
    }

}

int partition(int arr[],int st,int end)
{

    int pivot=arr[end];
    int index=st-1;
    int temp;

    for(int j=st; j<end;j++)
    {
        if(arr[j]<=pivot)
        {
            index++;
            
            temp=arr[index];
            arr[index]=arr[j];
            arr[j]=temp;

        }

        

    }

            index++;
            temp=arr[index];
            arr[index]=pivot;
            arr[end]=temp;

            return index;
}

