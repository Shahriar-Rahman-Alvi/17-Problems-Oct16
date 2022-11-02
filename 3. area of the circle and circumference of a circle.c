#include <stdio.h>
int main()
{
    int r;
    float area , circumference;
    printf("Input radius: \n");
    scanf("%d" , &r);
    area = 3.14 * r * r;
    circumference = 2* 3.14 * r;
    printf("The area is %f\nThe circumference is %f" , area , circumference);
    return 0;
}
