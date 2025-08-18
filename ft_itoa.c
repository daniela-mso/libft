#include <stdlib.h>

char *ft_itoa(int n)
{
    long new_n = (long) n; 
    long a = new_n > 0 ? new_n : new_n * -1 ;
    int b = 1;
    while(a > 9)
    {
        a = a / 10;
        b++;
    }
    if(new_n < 0)
        b++;
    char *nb = malloc(sizeof(char) * b + 1);
    if(!nb)
        return NULL;
    int i = 0;
    if(new_n < 0)
    {
        nb[i] = '-';
        i++;
        new_n *= -1;
    }
    b--;
    while(new_n > 0)
    {
        nb[b] = (new_n % 10) + '0';
        new_n = new_n / 10;
        b--; 
        i++;
    }
    
    if (n == 0)
    {
        nb[b] = 0 + '0';
        i++;
    }
    nb[i] = '\0';
    return nb;
}

// converts the int into a string 
// need to find out the lengt of the int so i can allocate memory
// int is 4 bytes char is 1
