#include<stdio.h>

void sort(int list[], int n);

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
        printf("%2d ", list[i]);

    sort(list, n);

    printf("\nArray after sort: ");
    for (int i = 0; i < n; i++)
        printf("%2d ", list[i]);

    return 0;
}

void sort(int list[], int n)
{
    int temp;

    for(int i = 0; i < n - 1; i++)   
    {
        int min_index = i;

        for(int j = i + 1; j < n; j++)
        {
            if(list[j] < list[min_index])
                min_index = j;
        }

        // swap
        temp = list[min_index];
        list[min_index] = list[i];
        list[i] = temp;
    }
}