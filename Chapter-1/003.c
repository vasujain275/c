#include <stdio.h>

int main(){
    float cel,fr;
    printf("Enter the temp (*c)");
    scanf("%f",&cel);
    fr = (cel * (9/5)) + 32;
    printf("Temp is %f ferhanite\n", fr);
    return 0;
}