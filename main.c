#include "libft.h"
#include <stdio.h>

// // pre-processor -> compilation -> linker
//     .c.preprocessed    .o             a.out/libft.a

int main()
{
	char s[32];
	ft_strcpy(s, "hello there");
	printf("%d\n", ft_strlen(s));
	return 0;
}
