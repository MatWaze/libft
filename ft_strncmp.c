#include "libft.h"

int     ft_strncmp(char *s1, char *s2, unsigned int n)
{
        int     i;

        i = 0;
        while (i < n)
        {
                if (s1[i] > s2[i])
                {
                        return (1);
                }
                else if (s1[i] < s2[i])
                {
                        return (-1);
                }
                i++;
        }
        return (0);
}

int     main(void)
{
        char    *s1 = " f";
        char    *s2 = " k";
        printf("%i\n", ft_(s1, s2, 2));
        printf("%i", (s1, s2, 2));
}