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

char    *ft_strchr(const char *s, int c)
{
        int     i;
        i = ft_strlen1(s) - 1;
        while (i >= 0)
        {
                if (s[i] == c)
                        return (&s[i]);
                i--;
        }
        return (0);
}