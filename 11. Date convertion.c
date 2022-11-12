#include <stdio.h>
int main()
{
    int days , weeks , months , years , calculatedDays;
    printf("This program is to convert total number of days into years, months, weeks, and days. \n");
    printf("Enter total days: ");
    scanf("%d" , &days);
    years = days / 365;
    calculatedDays = days % 365;
    months = calculatedDays / 30;
    calculatedDays = calculatedDays % 30;
    weeks = calculatedDays / 7;
    calculatedDays = calculatedDays % 7;
    printf("Total days is equals to %d years , %d months , %d weeks , %d days" , years , weeks , months , calculatedDays);
    return 0;
}
