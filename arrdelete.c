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


    // Insert element
    for(int i = pos-1; i < n-1; i++)
        list[i] = list[i+1];


    n--;

    printf("\nArray after: ");
    for(int i = 0; i < n; i++)
        printf("%3d", list[i]);

    return 0;
}