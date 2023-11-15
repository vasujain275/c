#include <stdio.h>

int main(){
    int p,r,t,si;
    printf("Enter Principle, Rate, Time(in yrs): ");
    scanf("%d %d %d", &p,&r,&t);
    si = (p*r*t) / 100;
    printf("The Simple intrest is - %d\n",si);
    return 0;
}