#include <stdio.h>

int main()
{
    int n, pos, item;
    int list[100];

    printf("Enter Size of Array: ");
    scanf("%d", &n);

    printf("Enter %d numbers: ", n);
    for(int i = 0; i < n; i++)
        scanf("%d", &list[i]);

    printf("\nArray before: ");
    for(int i = 0; i < n; i++)
        printf("%3d", list[i]);

    printf("\nEnter position: ");
    scanf("%d", &pos);

    printf("Enter item: ");
    scanf("%d", &item);

    // Insert element
    for(int i = n - 1; i >= pos - 1; i--)
        list[i + 1] = list[i];

    list[pos - 1] = item;
    n++;

    printf("\nArray after: ");
    for(int i = 0; i < n; i++)
        printf("%3d", list[i]);

    return 0;
}