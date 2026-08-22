#include <stdio.h>

int isLeapYear(int year) {
    if (year % 400 == 0)
        return 1;
    else if (year % 100 == 0)
        return 0;
    else if (year % 4 == 0)
        return 1;
    else
        return 0;
}

int main() {
    int year, month;
    int days, startDay;
    int i;

    int monthDays[] = {
        31, 28, 31, 30, 31, 30,
        31, 31, 30, 31, 30, 31
    };

    printf("Enter year: ");
    scanf("%d", &year);

    printf("Enter month (1-12): ");
    scanf("%d", &month);

    if (month < 1 || month > 12) {
        printf("Invalid month!\n");
        return 0;
    }

    if (month == 2 && isLeapYear(year))
        days = 29;
    else
        days = monthDays[month - 1];

    int m = month;
    int y = year;

    if (m < 3) {
        m += 12;
        y--;
    }

    startDay = (1 + (13 * (m + 1)) / 5 +
                y + y / 4 - y / 100 +
                y / 400) % 7;

    startDay = (startDay + 6) % 7;

    printf("\n       %d-%02d\n", year, month);
    printf(" Sun Mon Tue Wed Thu Fri Sat\n");

    for (i = 0; i < startDay; i++) {
        printf("    ");
    }

    for (i = 1; i <= days; i++) {
        printf("%4d", i);

        if ((i + startDay) % 7 == 0)
            printf("\n");
    }

    printf("\n");

    return 0;
}
