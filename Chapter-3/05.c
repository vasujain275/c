#include <stdio.h>

int main(){
    char a;
    printf("Enter Character: ");
    scanf("%c",&a);
    if(a>='a' && a<='z'){
        printf("It is a Small Case Char.\n");
    }
    else{
        printf("It is not a small case char.\n");
    }
    return 0;
}