#include <stdio.h>
int main()
{
    int area , lenght , breadth;
    printf("Input the lenght: \n");
    scanf("%d" , &lenght);
    printf("Input the breadth: \n");
    scanf("%d" , &breadth);
    area = lenght * breadth;
    printf("The result is %d" , area);
    return 0;
}
