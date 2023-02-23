#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    print_last_digit(98);
    print_last_digit(0);
    print_last_digit(14);
    r = print_last_digit(-1024);
    _putchar(r);
    _putchar('\n');
    return (0);
}
