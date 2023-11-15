#include <stdio.h>
#include<stdbool.h>

int main(){
    int year;

    printf("Enter the year: ");
    scanf("%d",&year);
    bool isLeap = (year%4==0) ? true : false;
    if(isLeap){
        printf("It is a leap year.\n");
    }
    else{
        printf("Not a Leap Year!\n");
    }
    return 0;
}