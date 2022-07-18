int ft_printf(const char *str, ...)
{
    va_list tmp;

    va_start(tmp, str);
    while (*str != '\0')
    {
        if (*str != '%')
            ft_putchar(*str);
        else
        {
            str++;
            if (*str == 'c')
                ft_putchar(va_arg(tmp, char));
            else if (*str == 's')
                ft_putstr(va_arg(tmp, char *));
            else if (*str == 'p')
                ft_putad(va_arg(tmp, void *));
            else if (*str == 'd' || *str == 'i')
                ft_putnbr(va_arg(tmp, int));
            else if (*str == 'u')
                ft_putnbr_un_int(va_arg(tmp, unsigned int));
            else if (*str == 'x' || *str == 'X')
                ft_putnbr_x(va_arg(tmp, unsigned int));
            else if (*str == '%')
                ft_putchar('%');
        }
        str++;
    }
    return (0);
}