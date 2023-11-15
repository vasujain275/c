#include <stdio.h>

int main(){
    int sum,i=0;
    while (i<=10)
    {
        sum += i;
        i++;
    }
    printf("Sum is %d\n",sum);
    
    return 0;
}