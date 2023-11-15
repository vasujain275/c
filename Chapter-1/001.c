#include <stdio.h>

int main(){
    int a,b,area;
    printf("Enter the length and breath: ");
    scanf("%d %d",&a,&b);
    area = a*b;
    printf("Area of Rectangle is - %d\n", area);
    return 0;
}