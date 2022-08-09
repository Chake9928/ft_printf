NAME = libftprintf.a

SRCS =	ft_printf.c ft_printf_utils.c ft_put_c_s.c ft_put_d_i.c ft_put_p.c ft_put_u.c ft_put_x.c
OBJS = $(SRCS:.c=.o)
CFLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME):$(OBJS)
	ar -cr $(NAME) $(OBJS) 

%.o:%.c ft_printf.h
	cc $(CFLAGS) -o $@ -c $<

clean:
	rm -rf $(OBJS)

fclean:clean
	rm -rf $(NAME)

re: fclean all