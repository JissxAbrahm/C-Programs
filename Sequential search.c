#include <stdio.h>

int sequentialSearch(int a[], int n, int key)
{
    int i;

    for (i = 0; i < n; i++)
    {
        if (a[i] == key)
        {
            return i;
        }
    }

    return -1;
}

int main()
{
    int a[] = {10, 25, 30, 45, 50};
    int n = 5;
    int key;
    int result;

    printf("Enter element to search: ");
    scanf("%d", &key);

    result = sequentialSearch(a, n, key);

    if (result != -1)
        printf("Element found at position %d", result + 1);
    else
        printf("Element not found");

    return 0;
}
