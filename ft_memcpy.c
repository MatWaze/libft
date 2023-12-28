void    *ft_memcpy(void *dest, const void *src, int n)
{
        char    *s;
        char    *d;
        int     i;

        s = (char *) src;
        d = (char *) dest;

        i = 0;
        while (i < n)
        {
                d[i] = s[i];
        }

        return (dest);
}