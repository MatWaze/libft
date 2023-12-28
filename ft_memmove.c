#include "ft_libft.h"

void    *ft_memmove(void *dest, const void *src, int n)
{
        char	srce[1000];
        char    *s;
        char    *d;
        int     i;
        
        s = ft_memcpy(srce, src, n);
        d = (char *) dest;
        i = 0;

        while (i < n)
        {
                d[i] = s[i];
        }
        
        return (dest);
}