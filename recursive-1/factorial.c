#include <stdio.h>

int factorial(int n);

int main(void)
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    printf("%d\n", factorial(n));
}

int factorial(int n)
{
    if (n > 0)
    {
        return n * factorial(n-1);
    }
    else
        return 1;
}