#include <stdio.h>

long long int Fibonacci(long x);

int main(void)
{
    int n;
    printf("Enter how many fibonacci numbers you wnt to see starting from 0 :");
    scanf("%d", &n);
    for (int i = 0; i <= n; i++)
    {
        printf("%lld, ", Fibonacci(i));
    }
    printf("\n");
}

long long int Fibonacci(long x)
{
    if (x > 0)
    {
        if (x == 0)
        {
            return 0;
        }
        else if (x == 1)
        {
            return 1;
        }
        else
        {
            return Fibonacci(x-1) + Fibonacci(x-2);
        }
    }    
}