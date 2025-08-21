# target: dependencies dep2 dep3
# 	recipe

NAME=libft.a

OBJS := ft_strlen.o ft_strcpy.o ft_memcmp.o ft_atoi.o ft_memcpy.o ft_isprint.o ft_isalnum.o ft_isascii.o \
	ft_strncmp.o ft_isdigit.o ft_isalpha.o ft_memset.o  ft_strchr.o ft_memchr.o ft_bzero.o ft_toupper.o ft_tolower.o \
	 ft_strlcat.o ft_strnstr.o ft_strrchr.o ft_strlcpy.o ft_calloc.o ft_strdup.o ft_isspace.o ft_memmove.o \
	 ft_putchar_fd.o ft_putstr_fd.o ft_putendl_fd.o ft_putnbr_fd.o  ft_itoa.o ft_substr.o ft_strjoin.o ft_strtrim.o \
	 ft_strmapi.o ft_split.o \
	 ft_lstnew.o ft_lstadd_front.o ft_lstsize.o ft_lstlast.o ft_lstadd_back.o ft_lstdelone.o ft_lstclear.o ft_lstiter.o ft_lstmap.o



BONUS_OBJS := ft_lstnew.o ft_lstadd_front.o ft_lstsize.o ft_lstlast.o ft_lstadd_back.o ft_lstdelone.o ft_lstclear.o ft_lstiter.o ft_lstmap.o

all: $(NAME)

%.o: %.c
	gcc -Wall -Wextra -Werror -g -fPIC -c $<

$(NAME): $(OBJS)
	ar r libft.a $(OBJS)

clean:
	-rm *.o
	-rm *.a

fclean:
	-rm -f *.o
	-rm -f *.a

re: clean all

# this doesent work with the testing thing  but its required by the project
bonus: $(OBJS) $(BONUS_OBJS)
	ar r $(NAME) $(OBJS) $(BONUS_OBJS)


# for the tests: https://github.com/alelievr/libft-unit-test
so: $(OBJS)
	gcc -nostartfiles -shared -o libft.so $(OBJS)

