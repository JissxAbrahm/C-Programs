#include <stdio.h>

#define MAX_SIZE 100
int main() {
    int arr1[MAX_SIZE + 1], i, n, p, inval;
    printf("\n\nInsert New value in the sorted array:\n");
    printf("-----------------------------------------\n");
    printf("Input number of elements you want to insert (max %d): ", MAX_SIZE);
    scanf("%d", &n);
    if (n > MAX_SIZE) {
        printf("The size of the array cannot exceed %d. Please try again.\n", MAX_SIZE);
        return 1; 
    }
    printf("Input %d elements in the array in ascending order:\n", n);
    for (i = 0; i < n; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr1[i]);
    }
    printf("Input the value to be inserted : ");
    scanf("%d", &inval);
    printf("The existing array list is :\n");
    for (i = 0; i < n; i++) {
        printf("% 5d", arr1[i]);
    }
    for (i = 0; i < n; i++) {
        if (inval < arr1[i]) {
            p = i;
            break;
        } else {
            p = i + 1;
        }
    }
    for (i = n; i >= p; i--) {
        arr1[i + 1] = arr1[i];
    }
    arr1[p] = inval;
    printf("\n\nAfter Insert the list is :\n");
    for (i = 0; i <= n; i++) {
        printf("% 5d", arr1[i]);
    }
    printf("\n");
    return 0;
}

