#include "libft.h"

int     ft_strlen1(char *str)
{
    int     i;
    i = 0;
    while (str[i])
    {
        i++;
    }
    return (i);
}

char    *ft_strdup(char *src)
{
        int     i;
        char    *dup;
        i = 0;
        dup = (char *) malloc(sizeof(char) * (ft_strlen1(src) + 1));
        if (!dup)
        {
                return (NULL);
        }
        while (src[i])
        {
                dup[i] = src[i];
                i++;
        }
        dup[i] = '\0';
        return (dup);
}