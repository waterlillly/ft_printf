# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lbaumeis <lbaumeis@student.42vienna.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/29 17:04:33 by lbaumeis          #+#    #+#              #
#    Updated: 2023/10/30 21:15:19 by lbaumeis         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFILES = ft_printchar.c ft_printf.c ft_printnbr.c ft_printptr.c ft_printstr.c

OFILES = $(CFILES:.c=.o)

ALLFILES = $(OFILES)

CC = cc
CFLAGS = -Wall -Wextra -Werror
NAME = libftprintf.a

.c.o:
	$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(ALLFILES)
	ar rc $(NAME) $(ALLFILES)
	ranlib $(NAME)

clean:
	rm -f $(OFILES)

fclean: clean
	rm -f $(NAME)
	rm -f a.out

re: fclean all

.PHONY: all clean fclean re