#include <stdio.h>

double power(int x, int n);

int main(void)
{
    int x;
    int n;
    printf("Enter the value of x : ");
    scanf("%d", &x);
    printf("Enter the value of the power : ");
    scanf("%d", &n);
    double r = power(x,n);
    printf("%.2f\n", r);
}


double power(int x, int n)
{
    if (n > 0)
    {
        return (1.0 * x * power(x, n-1));
    }
    else if (n < 0)
    {
        return (1.0 / power(x, -n));
    }
    else
    {
        return 1.0;
    }
}