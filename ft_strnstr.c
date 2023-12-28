char    *ft_strstr(char *str, char *to_find, int n)
{
        char    *ptr;
        int     i;
        int     j;

        i = 0;
        j = 0;
        while (i < n)
        {
                if (str[i] == to_find[j])
                {
                        if (j == 0)
                                ptr = &str[i];
                        j++;
                }
                else
                {
                        ptr = 0;
                        j = 0;
                }
                if (j == ft_strlen(to_find))
                        break;
                i++;
        }
        return (ptr);
}