SRCS	= ft_printf.c ft_printf_utils.c  print_numbers.c  print_string.c

OBJS		= $(SRCS:.c=.o)

CC		= gcc

CFLAGS		= -Wall -Wextra -Werror

HDRS		= ft_printf.h

RM			= rm -f

NAME		= libftprintf.a

all:		$(NAME)

$(NAME):	$(OBJS) $(HDRS)
			ar rc $(NAME) $(OBJS)

%.o: %.c $(HDRS)
	$(CC) -c -o $@ $< $(CFLAGS)

clean:
			$(RM) $(OBJS) $(OBJS_BONUS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re bonus
