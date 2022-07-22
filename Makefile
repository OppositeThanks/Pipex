# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lperrin <lperrin@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/22 11:09:50 by lperrin           #+#    #+#              #
#    Updated: 2022/07/22 11:59:10 by lperrin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	pipex

CC			=	gcc

LIB_DIR		=	libft/
LIB			=	libft.a

DIR			=	srcs/
OBJ_DIR		=	obj/
SUB_DIR		=	obj/srcs obj/srcs

FLAG		=	-c			\
				-Wall		\
				-Wextra		\
				-Werror

INCLUDE		=	-I includes/					\
				-I $(LIB_DIR)

RM			=	/bin/rm -f

FILES	=		main.c \
				extra.c \
				free.c

SRCS		=	$(addprefix $(DIR), $(FILES))
OBJ		=	$(SRCS:$(DIR)%.c=$(OBJ_DIR)%.o)

all			:	$(NAME)	

obj/%.o		:	srcs/%.c
				@mkdir -p $(OBJ_DIR) $(SUB_DIR)
				$(CC) -g $(FLAG) $(INCLUDE) $< -o $@

$(LIB)		:	
				@$(MAKE) -C $(LIB_DIR)
				/bin/mv $(LIB_DIR)$(LIB) .

$(NAME)	:	$(OBJ) $(LIB)
				$(CC) -o $@ $^

clean		:	
				for dir in $(MODULES); do			\
					@$(MAKE) clean -C $$dir;		\
				done
				@/bin/rm -rf $(OBJ_DIR)

fclean		:	clean
				@$(MAKE) fclean -C $(LIB_DIR)
				@$(RM) $(LIB)
				@$(RM) $(NAME)

re			:	fclean all

.PHONY		:	all clean fclean re

# -fsanitize=address