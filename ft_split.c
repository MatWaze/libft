#include "libft.h"

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int 	i;
	i = 0;
	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	is_whitespace(char c, char delim)
{
        if (c == delim)
                return (1);
	return (0);
}

int     length(char *str, char delim)
{
        int     i;
        i = 0;
        while (str[i] && !is_whitespace(str[i], delim))
                i++;
        return (i);
}

int     word_count(char *str, char delim)
{
        int     i;
        int     word;
        int     count;
        
        i = 0;
        count = 0;
        word = 0;
        while (str[i])
        {
                if (!is_whitespace(str[i], delim) && word == 0)
                {
                        word = 1;
                        count++;
                }
                else if (is_whitespace(str[i], delim) && word == 1)
                        word = 0;
                i++;
        }
        return (count);
}

char    **ft_split(char *str, char *delim)
{
        char    **arr;
        int     len;
        int     i;
        int     j;
        int     word;
        arr = (char **) malloc((word_count(str, delim) + 1) * sizeof(char *));
        j = 0;
        i = 0;
        word = 0;
        while (str[i])
        {
                // If the char isnt whitespace, then allocate memory for the word and initialize it
                if (!is_whitespace(str[i], delim) && word == 0)
                {
                        word = 1;
                        len = length(&str[i], delim);
                        arr[j] = (char *) malloc(sizeof(char) * (len + 1));
                        arr[j] = ft_strncpy(arr[j], &str[i], len);
                        j++;
                }
                else if (is_whitespace(str[i], delim) && word == 1)
                        word = 0;
                i++;
        }
        arr[j] = NULL;
        return (arr);
}