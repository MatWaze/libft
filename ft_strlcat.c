unsigned int     ft_strlen1(char *str)
{
    unsigned int     i;
    i = 0;
    while (str[i])
    {
        i++;
    }
    return (i);
}

unsigned int    ft_strlcat(char *dest , char *src, unsigned int size)
{
        int     i;
        unsigned int dest_len;
        unsigned int src_len;
        
        i = 0;
        dest_len = ft_strlen1(dest);
        src_len = ft_strlen1(src);
        while (i < size && src[i])
        {
                dest[dest_len + i] = src[i];
                i++;
        }
        dest[dest_len + i] = '\0';
        return (dest_len + src_len);
}