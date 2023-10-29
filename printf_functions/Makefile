# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lbaumeis <lbaumeis@student.42vienna.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/29 17:04:33 by lbaumeis          #+#    #+#              #
#    Updated: 2023/10/29 19:34:12 by lbaumeis         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFILES = ft_checkif.c ft_printchar.c ft_printf.c ft_printnbr.c ft_printptr.c
CFILES += ft_printstr.c ft_printunbr.c libft.a

CONVFILES = $(CFILES:.c=.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror
NAME = ftprintf.a

.c.o:
	$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME) 

$(NAME): $(CONVFILES)
	ar rc $(NAME) $(CONVFILES)
	ranlib $(NAME)

clean:
	rm -f $(CONVFILES)

fclean: clean
	rm -f $(NAME)
	rm -f a.out

re: fclean all

.PHONY: all clean fclean re