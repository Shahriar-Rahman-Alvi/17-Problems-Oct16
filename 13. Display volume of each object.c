#include <stdio.h>
int main()
{
    int radius , lenght , volume_of_cube;
    float  volume_of_sphere;
    printf("This program is to calculate the volume of a sphere and a cube. \n");
    printf("Enter the radius: ");
    scanf("%d" , &radius);
    printf("Enter the lenght: ");
    scanf("%d" , &lenght);
    volume_of_sphere = (4 * 3.14 * radius * radius * radius) / 3;
    volume_of_cube = lenght * lenght * lenght;
    printf("Volume of the sphere with a radius of %d is %f.\nVolume of the cube with a lenght of %d is %d" , radius , volume_of_sphere , lenght , volume_of_cube);
    return 0;
}
