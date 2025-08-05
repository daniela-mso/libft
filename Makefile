# target: dependencies dep2 dep3
# 	recipe

NAME=libft.a

OBJS := ft_strlen.o ft_strcpy.o ft_memcmp.o ft_atoi.o ft_memcpy.o ft_isprint.o ft_isalnum.o ft_isascii.o \
	ft_strncmp.o ft_isdigit.o ft_isalpha.o ft_memset.o  ft_strchr.o ft_memchr.o ft_bzero.o ft_toupper.o ft_tolower.o \
	 ft_strlcat.o ft_strnstr.o ft_strrchr.o ft_strlcpy.o ft_calloc.o ft_strdup.o ft_isspace.o

all: $(NAME)

%.o: %.c
	gcc -Wall -Wextra -Werror -fPIC -c $<

$(NAME): $(OBJS)
	ar r libft.a $(OBJS)

clean:
	-rm *.o
	-rm *.a

fclean:
	-rm -f *.o
	-rm -f *.a

re: clean all

# for the tests: https://github.com/alelievr/libft-unit-test
so: $(OBJS)
	gcc -nostartfiles -shared -o libft.so $(OBJS)

