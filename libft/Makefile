# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dbauduin <dbauduin@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/09 03:21:09 by dbauduin          #+#    #+#              #
#    Updated: 2018/11/13 02:28:47 by dbauduin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

include .misc/make/color
include .misc/make/paths
include .misc/make/misc_var

.SILENT	: __START	NAME	clean fclean all re object library os_dep libft
.PHONY	: __START			clean fclean all re object library os_dep libft

.DEFAULT_GOAL = __START

PROJECT	=	LIBFT

CC		?=	clang
CC_FLAG ?=	-Werror \
			-Wall	\
			-Wextra \
			#-O1 -g -fsanitize=address	\
			#-fno-omit-frame-pointer		\


INCLUDE = include

NAME	?=	libft.a

SRC		= $(SRC_W)

OBJ		:=	$(notdir $(SRC:.c=.o))

OBJ_P	=	$(addprefix $(P_OBJ)/,$(OBJ))
OBJ_W ?= $(shell find obj | grep \\.o$)

__START: os all
	 printf "$(OK)[$(PROJECT)] Done$(C_DEF)\n"

all: $(NAME)

$(NAME):  $(SRC)
	@make library --no-print-directory

clean:
	rm		-f	$(OBJ_W)

fclean:		clean
	rm		-f	$(NAME)

re:			fclean all

object:	$(SRC) $(P_SRC) $(P_OBJ)
	$(foreach SOURCE, $(SRC), \
		$(CC) $(CC_FLAG) -I ./include -c $(SOURCE) -o $(P_OBJ)/$(notdir $(SOURCE:.c=.o))	&& \
		printf "$(OK)[$(PROJECT)] $(SOURCE)$(C_DEF)" && sleep $(SLEEP)	&& \
		printf "\r\033[K" \
	;)

library:	object $(P_OBJ) $(OBJ_P)
	@ar rc $(NAME) $(OBJ_W)
	@ranlib $(NAME)

os_dep:
	printf "[$(PROJECT)] Os dependent stufs\n"
