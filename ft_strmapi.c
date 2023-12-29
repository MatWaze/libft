#include "libft.h"

char    *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
        int     len;
        char    *str;
        int     i;

        len = ft_strlen(s);
        str = (char *) malloc(len + 1);
        if (!str)
                return (0);
        i = 0;

        while (s[i])
        {
                str[i] = (*f) (i, s[i]);
                i++;
        }
        str[i] = '\0';
        return (str);
}