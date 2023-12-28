#include "ft_libft.h"

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

int     ft_atoi(char *str)
{ 
        int     number;
        int     i;
        number = 0;
        i = 0;
        while (str[i])
        {
                if (str[i] >= '0' && str[i] <= '9')
                {
                        number = number * 10 + str[i] - '0';
                }
                i++;
        }
        if (str[0] == '-')
        {
                number *= -1;
        }
        return (number);
}

int     main(void)
{
        printf("%i", ft_atoi("-42") + ft_atoi("36"));
}