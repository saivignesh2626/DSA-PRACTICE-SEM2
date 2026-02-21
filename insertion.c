#include <stdio.h>

void sort(int arr[], int size);

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

    sort(list, n);

    printf("\nArray after sort: ");
    for (int i = 0; i < n; i++)
        printf("%2d", list[i]);

    return 0;
}
void sort (int list[],int n)
{
    int temp;
    for(int i=1;i<n;i++)
    {
        temp=list[i];
        int j=i-1;

        while(j>=0 && list[j] > temp)
        {
            list[j+1]=list[j];
            j--;           

        }

        list[j+1]=temp;
    }
}


