#include "libft.h"

void    ft_putchar_fd(char c, int fd)
{
        write(fd, &c, 1);
}

void    ft_putnbr_fd(int n, int fd)
{
        long long       l;

        l = n;
        if (l < 0)
        {
                ft_putchar_fd('-', fd);
                l = -l;
        }
        if (l < 10)
        {
                ft_putchar_fd(l + 48, fd);
                return ;
        }
        else
        {
                ft_putnbr_fd(l / 10, fd);
        }
        ft_putnbr_fd(l % 10, fd);
}