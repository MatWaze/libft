#ifndef FT_LIBFT_H
#define FT_LIBFT_H

#include <unistd.h>
#include <stdlib.h>

typedef struct s_list
{
        void    *content;
        struct  s_list *next;
} t_list;

#endif