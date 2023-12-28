char    *ft_substr(char const *s, unsigned int start, int len)
{
        char    *substr;
        int     i;

        substr = (char *) malloc(len);
        i = 0;

        if (!substr)
                return (0);

        while (i < len)
        {
                substr[i] = s[start];
                i++;
                start++;
        }        
        return (substr);
}