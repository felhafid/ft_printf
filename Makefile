NAME = libftprintf.a

SRCS = ft_putchar.c ft_putnbr_base.c ft_putnbr_uns.c ft_putstr.c ft_printf.c ft_putnbr.c ft_putp.c

OBJS = $(SRCS:.c=.o)

CC = cc

FLAGS = -Wall -Werror -Wextra

HEADER = ft_printf.h

rm = rm -f

all : $(NAME)

%.o : %.c $(HEADER)
	$(CC) $(FLAGS) -c $< -o $@

$(NAME) : $(OBJS)
	ar rcs $(NAME) $(OBJS)

clean :
	$(rm) $(OBJS)

fclean : clean
	$(rm) $(NAME)

re : fclean all

.PHONY : all clean fclean re