# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dbauduin <dbauduin@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/28 16:06:53 by dbauduin          #+#    #+#              #
#    Updated: 2018/11/28 16:06:54 by dbauduin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

OBJS = $(addsuffix .o, $(addprefix objs/, main print run tool))

NAME = ft_select

all: objs $(NAME)

objs:
	mkdir objs

$(NAME): $(OBJS)
	make -C libft
	gcc -o $(NAME) $(OBJS) libft/libft.a -ltermcap

objs/%.o: src/%.c
	gcc -o $@ -c $< -I include -I libft/include

clean:
	rm -rf objs

fclean: clean
	make -C libft fclean
	rm -f $(NAME)

re: fclean all
