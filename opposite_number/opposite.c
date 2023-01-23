#include <stdio.h>
int main()
{
    double number;
    printf("enter a number : ");
    scanf("%lf",&number);
    printf("the opposite of your number is : %.1lf \n", number * -1);
}