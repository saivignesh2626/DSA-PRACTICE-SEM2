#include <stdio.h>

void bubblesort(int arr[], int size);

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

    bubblesort(list, n);

    printf("\nArray after sort: ");
    for (int i = 0; i < n; i++)
        printf("%2d", list[i]);

    return 0;
}

void bubblesort(int list[], int size)
{
    int temp;

    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (list[j] > list[j + 1])
            {
                temp = list[j];
                list[j] = list[j + 1];
                list[j + 1] = temp;
            }
        }
    }
}