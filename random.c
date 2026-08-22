#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numbers[10];
    int i, j, temp;

    for (i = 0; i < 10; i++) {
        numbers[i] = i + 1;
    }

    srand(time(NULL));

    for (i = 9; i > 0; i--) {
        j = rand() % (i + 1);

        temp = numbers[i];
        numbers[i] = numbers[j];
        numbers[j] = temp;
    }

    printf("Shuffled Numbers:\n");

    for (i = 0; i < 10; i++) {
        printf("%d ", numbers[i]);
    }

    printf("\n");

    return 0;
}
