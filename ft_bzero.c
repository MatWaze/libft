#include "ft_libft.h"

void    ft_bzero(void * s , int n)
{
        char    *ptr;
        int     i;

        ptr = (char *) s;
        i = 0;
        while (i < n)
        {
                ptr[i] = 0;                
        }
}