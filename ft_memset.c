void    *ft_memset(void *s, int c, int n)
{
        char    *char_ptr;
        int     i;
        i = 0;

        char_ptr = (char *) s;
        while (i < n)
        {
                char_ptr[i] = c;
        }
        return (s);
}