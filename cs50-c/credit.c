#include <stdio.h>
#include "cs50.h"
#include <math.h>

int sum_digits(int num)
{
    if (num > 9 && num < 100)
    {
        int digit1 = num / 10;
        digit1 = digit1 % 10;

        int digit2 = num % 10;

        int sum = digit1 + digit2;

        return sum;
    }
    else
    {

        return num;
    }
}

int main(void)
{
    int count = 0;

    long long int card_number = get_long("Number: ");
    long long int digits = card_number;

    while (digits != 0)
    {
        ++count;
        int digit = digits % 10;
        digits /= 10;
    }

    // printf("Number of digits: %i \n", count);

    if (count != 13 && count != 15 && count != 16)
    {
        printf("%i\n", count);
        printf("INVALID\n");
    }

    if (count == 13)
    {
        int digit1 = ((card_number / 1000000000000) % 10);
        int digit2 = ((card_number / 100000000000) % 10);
        int digit3 = ((card_number / 10000000000) % 10);
        int digit4 = ((card_number / 1000000000) % 10);
        int digit5 = ((card_number / 100000000) % 10);
        int digit6 = ((card_number / 10000000) % 10);
        int digit7 = ((card_number / 1000000) % 10);
        int digit8 = ((card_number / 100000) % 10);
        int digit9 = ((card_number / 10000) % 10);
        int digit10 = ((card_number / 1000) % 10);
        int digit11 = ((card_number / 100) % 10);
        int digit12 = ((card_number / 10) % 10);
        int digit13 = (card_number % 10);

        digit12 *= 2;
        digit10 *= 2;
        digit8 *= 2;
        digit6 *= 2;
        digit4 *= 2;
        digit2 *= 2;

        int summation = sum_digits(digit12) + sum_digits(digit10) + sum_digits(digit8) + sum_digits(digit6) + sum_digits(digit4) + sum_digits(digit2) + digit13 + digit11 + digit9 + digit7 + digit5 + digit3 + digit1;

        if (summation % 10 == 0)
        {
            printf("VISA\n");
        }
        else
        {
            printf("INVALID\n");
        }
    }

    if (count == 15)
    {
        int digit1 = ((card_number / 100000000000000) % 10);
        int digit2 = ((card_number / 10000000000000) % 10);
        int digit2_v2 = digit2;
        int digit3 = ((card_number / 1000000000000) % 10);
        int digit4 = ((card_number / 100000000000) % 10);
        int digit5 = ((card_number / 10000000000) % 10);
        int digit6 = ((card_number / 1000000000) % 10);
        int digit7 = ((card_number / 100000000) % 10);
        int digit8 = ((card_number / 10000000) % 10);
        int digit9 = ((card_number / 1000000) % 10);
        int digit10 = ((card_number / 100000) % 10);
        int digit11 = ((card_number / 10000) % 10);
        int digit12 = ((card_number / 1000) % 10);
        int digit13 = ((card_number / 100) % 10);
        int digit14 = ((card_number / 10) % 10);
        int digit15 = (card_number % 10);

        digit14 *= 2;
        digit12 *= 2;
        digit10 *= 2;
        digit8 *= 2;
        digit6 *= 2;
        digit4 *= 2;
        digit2 *= 2;

        int summation = sum_digits(digit14) + sum_digits(digit12) + sum_digits(digit10) + sum_digits(digit8) + sum_digits(digit6) + sum_digits(digit4) + sum_digits(digit2) + digit15 + digit13 + digit11 + digit9 + digit7 + digit5 + digit3 + digit1;

        if (summation % 10 == 0 && (digit2_v2 == 4 || digit2_v2 == 7))
        {
            printf("AMEX\n");
        }
        else
        {
            printf("INVALID\n");
        }
    }

    if (count == 16)
    {
        int digit1 = ((card_number / 1000000000000000) % 10);
        int digit2 = ((card_number / 100000000000000) % 10);
        int digit3 = ((card_number / 10000000000000) % 10);
        int digit4 = ((card_number / 1000000000000) % 10);
        int digit5 = ((card_number / 100000000000) % 10);
        int digit6 = ((card_number / 10000000000) % 10);
        int digit7 = ((card_number / 1000000000) % 10);
        int digit8 = ((card_number / 100000000) % 10);
        int digit9 = ((card_number / 10000000) % 10);
        int digit10 = ((card_number / 1000000) % 10);
        int digit11 = ((card_number / 100000) % 10);
        int digit12 = ((card_number / 10000) % 10);
        int digit13 = ((card_number / 1000) % 10);
        int digit14 = ((card_number / 100) % 10);
        int digit15 = ((card_number / 10) % 10);
        int digit16 = (card_number % 10);

        digit15 *= 2;
        digit13 *= 2;
        digit11 *= 2;
        digit9 *= 2;
        digit7 *= 2;
        digit5 *= 2;
        digit3 *= 2;
        digit1 *= 2;

        int summation = sum_digits(digit15) + sum_digits(digit13) + sum_digits(digit11) + sum_digits(digit9) + sum_digits(digit7) + sum_digits(digit5) + sum_digits(digit3) + sum_digits(digit1) + digit16 + digit14 + digit12 +
                        digit10 + digit8 + digit6 + digit4 + digit2;

        if (summation % 10 == 0 && ((card_number / 1000000000000000) % 10) == 4)
        {
            printf("VISA\n");
        }
        else if (summation % 10 == 0 && (digit2 == 1 || digit2 == 2 || digit2 == 3 || digit2 == 4 || digit2 == 5))
        {
            printf("MASTERCARD\n");
        }
        else
        {
            printf("INVALID\n");
        }
    }
}