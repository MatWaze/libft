.PHONY: all bonus clean fclean re

name=libft.a
compiler=cc
flags=-Wall -Wextra -Werror
src=$(wildcard *.c)
bsrc=$(wildcard ft_lst*.c)
objects=$(src:.c=.o)
bobjects=$(bsrc:.c=.o)

all : $(name) $(bonus)

$(name) : $(objects)
	ar rcs $(name) $(objects)

%.o : %.c
	$(compiler) $(flags) -c $< -o $@

bonus :	$(bobjects)
	ar rcs $(name) $(bobjects)

clean :
	rm -f $(objects)
	rm -f $(bobjects)

fclean : clean
	rm -f $(name)

re : fclean all
