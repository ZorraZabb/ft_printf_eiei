all : compile run

compile : ft_putall.c printf.c ft_printf.h
	gcc -Wall -Werror -Wextra ft_printf.h ft_putall.c printf.c -o ft_putall

run : ft_putall
	./ft_putall

clean :
	rm -f ft_putall