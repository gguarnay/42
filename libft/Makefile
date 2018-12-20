# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gguarnay <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/30 12:27:37 by gguarnay          #+#    #+#              #
#    Updated: 2018/12/05 18:14:02 by gguarnay         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=libft.a
BINARY=ft_*.o
SOURCE=ft_*.c
FLAGS=-Wall -Werror -Wextra -fsanitize=address
DFLAG=-g -L. -lft

all: $(NAME)

$(NAME):
	gcc -c $(SOURCE) $(FLAGS)
	ar rc $(NAME) $(BINARY)
	ranlib $(NAME)

debug: re
	gcc $(FLAGS) $(DFLAG) -o debug.out $(D); ./debug.out

ldebug: re
	gcc $(FLAGS) $(DFLAG) -o debug.out $(D); lldb ./debug.out

dclean:
	/bin/rm -f debug.out

clean:
	/bin/rm -f $(BINARY)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
