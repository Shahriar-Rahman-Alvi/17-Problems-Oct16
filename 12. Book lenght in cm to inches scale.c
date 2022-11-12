#include <stdio.h>
int main()
{
    int centimeters;
    float inches;
    printf("This program is to convert length in Centimeters into Inches. \n");
    printf("Enter the lenght in centimeter: ");
    scanf("%d" , &centimeters);
    inches = centimeters / 2.54;
    printf("%d centimeters means %f inches" , centimeters , inches);
    return 0;
}
