#include <stdio.h>

int sum_digits(int num)
{
    if (num > 9 && num < 100)
    {
        int digit1 = num / 10;
        digit1 = digit1 % 10;

        int digit2 = num % 10;

        int sum = digit1 + digit2;
        printf("%i\n", sum);
        return sum;
    }
    else
    {
        printf("%i\n", num);
        return num;
    }
}

int main(void)
{
    sum_digits(9);
}