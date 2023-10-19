#include <stdio.h>

int main(){
    int m1,m2,m3;
    float per;
    printf("Enter your marks: ");
    scanf("%d %d %d",&m1,&m2,&m3);
    per = (m1+m2+m3) / 3;

    if (per>=40 && m1>=33 && m2>=33 && m3>=33){
        printf("You are Passed!");
    }
    else{
        printf("You Failed\n");
    }

    return 0;
}