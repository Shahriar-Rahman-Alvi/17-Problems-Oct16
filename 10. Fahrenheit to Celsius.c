#include <stdio.h>
int main()
{
    int Fahrenheit;
    float Celsius;
    printf("This program is to convert temperature from Fahrenheit to Celsius.\n");
    printf("Enter temperature in Fahrenheit: ");
    scanf("%d" , &Fahrenheit);
    Celsius = Fahrenheit - 32 * 5 / 9;
    printf("The temperature in Celsius is %f" , Celsius);
    return 0;
}
