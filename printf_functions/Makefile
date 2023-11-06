# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lbaumeis <lbaumeis@student.42vienna.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/29 17:04:33 by lbaumeis          #+#    #+#              #
#    Updated: 2023/11/06 18:36:26 by lbaumeis         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFILES = ft_printchar.c ft_printf.c ft_printnbr.c ft_printptr.c ft_printstr.c
CFILES += ft_decideformat.c

OFILES = $(CFILES:.c=.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror
NAME = ft_printf.a

.c.o:
	$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OFILES)
	ar rc $(NAME) $(OFILES)
	#runlib $(NAME)

clean:
	rm -f $(OFILES)

fclean: clean
	rm -f $(NAME)
	rm -f a.out

re: fclean all

.PHONY: all clean fclean re