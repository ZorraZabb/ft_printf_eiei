#include "ft_printf.h"

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_putstr(char *s)
{
    while (*s != '\0')
    {
        ft_putchar(*s);
        s++;
    }
}

void    ft_putnbr(int n)
{
    int num;

    if (n == -2147483648)
    {
        ft_putnbr(n / 10);
        ft_putchar('8');
        return ;
    }
    if (n < 0)
    {
        ft_putchar('-');
        num = n * -1;
    }
    else
        num = n;
    if (num >= 10)
        ft_putnbr(num / 10);
    ft_putchar(num % 10 + '0');
}

void    ft_putnbr_x(unsigned long long n, char x)
{
    unsigned long long num;

    num = n / 16;

    if (num != 0)
        ft_putnbr_x(num, x);
    if (n - (16 * num) >= 10 && n - (16 * num) <= 15 && x == 'x')
    {
        ft_putchar((n - (16 * num)) % 10 + 'a');
        return ;
    }
    else if (n - (16 * num) >= 10 && n - (16 * num) <= 15 && x == 'X')
    {
        ft_putchar((n - (16 * num)) % 10 + 'A');
        return ;
    }
    ft_putnbr(n - (16 * num));
}

void    ft_putad_mini(unsigned long long int n)
{
    unsigned long long int num;

    num = n / 16;

    if (num != 0)
        ft_putad_mini(num);
    if (n - (16 * num) >= 10 && n - (16 * num))
    {
        ft_putchar((n - (16 * num)) % 10 + 'a');
        return ;
    }
    ft_putnbr(n - (16 * num));
}

void    ft_putad(void *address)
{
    ft_putstr("0x");
    ft_putnbr_x((unsigned long long)address, 'x');
}

void    ft_putnbr_un_int(unsigned int n)
{
    unsigned int num;

    num = n;

    if (num >= 10)
        ft_putnbr(num / 10);
    ft_putchar(num % 10 + '0');
}

int main(void)
{
    int a;
    a = 0;
    // ft_putchar('c');
    // ft_putchar('\n');
    // ft_putstr("abcde");
    // ft_putchar('\n');
    // ft_putnbr(98765432);
    // ft_putchar('\n');
    // ft_putnbr_x(42299, 'x');
    // ft_putchar('\n');
    // ft_putnbr_x(42299, 'X');
    // ft_putchar('\n');
    // ft_putnbr_un_int(4294967295);
    // ft_putchar('\n');
    // ft_putnbr_un_int(-3);
    // ft_putchar('\n');

    ft_printf("ADD2..[%p]\n",&a);

    ft_putad(&a);
    ft_putchar('\n');
    printf("TEST..[%u]\n",-3);

    printf("STRING...[%d], [%c]\n", 1, 'c');
    char* p = NULL;
    p = "(null)";
    printf( "%s", p);
}