#include <stdio.h>

int main()
{
    int a[100], n;
    int i;
    int largest, second;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    largest = second = -99999;

    for (i = 0; i < n; i++)
    {
        if (a[i] > largest)
        {
            second = largest;
            largest = a[i];
        }
        else if (a[i] > second && a[i] != largest)
        {
            second = a[i];
        }
    }

    if (second == -99999)
    {
        printf("\nSecond largest element does not exist.\n");
    }
    else
    {
        printf("\nLargest element = %d\n", largest);
        printf("Second largest element = %d\n", second);
    }

    return 0;
}
