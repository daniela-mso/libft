# target: dependencies dep2 dep3
# 	recipe

NAME=libft.a

all: $(NAME)

# TODO: ask Charles or the internet about makefile wildcard (%.c and %.o)

ft_strlen.o: ft_strlen.c
	gcc -Wall -Wextra -Werror -fPIC -c ft_strlen.c

ft_strcpy.o: ft_strcpy.c
	gcc -Wall -Wextra -Werror -fPIC -c ft_strcpy.c

$(NAME): ft_strlen.o ft_strcpy.o
	ar r libft.a ft_strlen.o ft_strcpy.o

clean:
	-rm *.o
	-rm *.a

fclean:
	-rm -f *.o
	-rm -f *.a

re: clean all

# for the tests: https://github.com/alelievr/libft-unit-test
so: ft_strlen.o ft_strcpy.o
	gcc -nostartfiles -shared -o libft.so ft_strlen.o ft_strcpy.o
