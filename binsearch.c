#include <stdio.h>

int binarysearch(int list[], int low, int high, int target);

int main()
{
    int n, target;

    printf("Enter Array size: ");
    scanf("%d", &n);

    int list[n];

    printf("Enter %d numbers: ", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &list[i]);
    }

    printf("\nEnter Target: ");
    scanf("%d", &target);

    int pos = binarysearch(list, 0, n - 1, target);

    if (pos != -1)
    {
        printf("Target %d Found at pos %d", target, pos + 1);
    }
    else
    {
        printf("Not found");
    }

    return 0;
}

int binarysearch(int list[], int low, int high, int target)
{
    int mid;

    while (low <= high)
    {
        mid = (low + high) / 2;

        if (list[mid] == target)
        {
            return mid;
        }
        else if (list[mid] < target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    return -1;
}