#include <stdio.h>

int binarySearch(int a[], int n, int key)
{
    int low = 0;
    int high = n - 1;
    int mid;

    while (low <= high)
    {
        mid = (low + high) / 2;

        if (a[mid] == key)
        {
            return mid;
        }
        else if (key > a[mid])
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

int main()
{
    int a[] = {10, 20, 30, 40, 50, 60, 70};
    int n = 7;
    int key;
    int result;

    printf("Enter element to search: ");
    scanf("%d", &key);

    result = binarySearch(a, n, key);

    if (result != -1)
        printf("Element found at position %d", result + 1);
    else
        printf("Element not found");

    return 0;
}
