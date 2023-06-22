#include "main.h"

/**
 * positive_or_negative - Determines if a number is positive or negative
 * @n: The number to check
 *
 * Return: void
 */
void positive_or_negative(int n)
{
    if (n > 0)
        printf("%d is positive\n", n);
    else if (n < 0)
        printf("%d is negative\n", n);
    else
        printf("%d is zero\n", n);
}

/**
 * main - Test function for positive_or_negative
 * Return: 0
 */
int main(void)
{
    int i = 0;
    positive_or_negative(i);
    return (0);
}
