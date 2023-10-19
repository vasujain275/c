#include <stdio.h>

int main(){
    float PI = 3.14;
    float h,r,volume;
    printf("Enter the radius and height of cylinder: ");
    scanf("%f %f",&r, &h);
    volume = (PI*r*r)*h;
    printf("Volume of Cylinder is - %f\n", volume);
    return 0;
}