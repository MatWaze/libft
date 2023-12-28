void    *ft_memchr(const void *s, int c, int n)
{
        char    *str;
        int     i;

        str = (char *) s;
        i = 0;
        while (str[i])
        {
                if (str[i] == c)
                        return (&str[i]);
                i++;
        }
        
        return (0);
}