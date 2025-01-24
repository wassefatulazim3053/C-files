#include <stdio.h>
int isLeapYear(int year) {
    if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) {
        return 1;
    }
    return 0;
}
int getStartDayOfYear(int year) {
    int day = (year + (year - 1) / 4 - (year - 1) / 100 + (year - 1) / 400) % 7;
    return day;
}
void printCalendar(int year) {
    int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    const char *months[] = {"January", "February", "March", "April", "May", "June",
                            "July", "August", "September", "October", "November", "December"};

    if (isLeapYear(year)) {
        daysInMonth[1] = 29;
    }

    int startDay = getStartDayOfYear(year);

    for (int i = 0; i < 12; i++) {
        printf("\n  ------------%s-------------\n", months[i]);
        printf("  Sun  Mon  Tue  Wed  Thu  Fri  Sat\n");

        for (int j = 0; j < startDay; j++) {
            printf("     ");
        }

        for (int day = 1; day <= daysInMonth[i]; day++) {
            printf("%5d", day);

            if ((startDay + day) % 7 == 0) { 
                printf("\n");
            }
        }
        printf("\n");

        startDay = (startDay + daysInMonth[i]) % 7;
    }
}

int main() {
    int year;

    printf("Enter the year: ");
    scanf("%d", &year);

    printf("\nCalendar for the year %d:\n", year);
    printCalendar(year);

    return 0;
}