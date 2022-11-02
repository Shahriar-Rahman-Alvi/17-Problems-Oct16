#include <stdio.h>
int main()
{
    int x , square , cube;
    printf("Input the number: \n");
    scanf("%d" , &x);
    square = x * x;
    cube = x * x * x;
    printf("The square is %d\nThe cube is %d" , square , cube);
    return 0;
}
