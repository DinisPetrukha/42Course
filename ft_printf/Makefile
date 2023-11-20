NAME = libftprintf.a
LIBFT = libft
SRCS = ft_printf.c ft_printf_char.c ft_printf_nbr.c ft_printf_ptr.c ft_printf_str.c ft_formatter.c
OBJS = $(SRCS:.c=.o)
CFLAGS = -Wall -Wextra -Werror -I $(LIBFT)

all: $(NAME) clean

$(NAME): $(OBJS)
	@make -C $(LIBFT)
	@cp $(LIBFT)/libft.a .
	@mv libft.a $(NAME)
	@ar -rcs $(NAME) $(OBJS)

clean:
	@rm -f $(OBJS)

fclean:
	@rm -f $(NAME) $(OBJS)

re: fclean all

.PHONY: all clean flcean re
