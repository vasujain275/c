// WAP to check if a number is divisble by 97 or not.

#include <stdio.h>

int main(){
    int n;
    printf("Enter the Number: ");
    scanf("%d",&n);
    if ((n%97)!=0){
        printf("Number is not divisble by 97\n");
    }
    else{
        printf("Number is divisible by 97\n");
    }
    return 0;
}