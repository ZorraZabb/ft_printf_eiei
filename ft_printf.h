#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

void    ft_putchar(char c);
void    ft_putstr(char *s);
void    ft_putnbr(int n);
void    ft_putnbr_x(unsigned long long n, char x);
void    ft_putad_mini(unsigned long long int n);
void    ft_putad(void *address);
void    ft_putnbr_un_int(unsigned int n);
int ft_printf(const char *str, ...);

#endif