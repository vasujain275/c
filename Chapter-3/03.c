#include <stdio.h>

int main()
{
    float salary, tax=0;
    printf("Enter your salary: ");
    scanf("%d", &salary);

    if (salary > 250000)
    {
        tax = 0.05 * (salary - 250000);
    }
    if (salary > 500000)
    {
        tax = 0.05 * (salary - 500000);
    }
    

    printf("Your tax is %d\n", tax);
    return 0;
}