FILES_M =   ft_atoi \
            ft_bzero \
            ft_calloc \
            ft_isalnum \
            ft_isalpha \
            ft_isascii \
            ft_isdigit \
            ft_isprint \
            ft_itoa \
            ft_memchr \
            ft_memcmp \
            ft_memcpy \
            ft_memmove \
            ft_memset \
            ft_putchar_fd \
            ft_putendl_fd \
            ft_putnbr_fd \
            ft_putstr_fd \
            ft_split \
            ft_strchr \
            ft_strdup \
            ft_striteri \
            ft_strjoin \
            ft_strlcat \
            ft_strlcpy \
            ft_strlen \
            ft_strmapi \
            ft_strncmp \
            ft_strnstr \
            ft_strrchr \
            ft_strtrim \
            ft_substr \
            ft_tolower \
            ft_toupper \

FILES_B =	ft_lstadd_back_bonus \
            ft_lstadd_front_bonus \
            ft_lstclear_bonus \
            ft_lstdelone_bonus \
            ft_lstiter_bonus \
            ft_lstlast_bonus \
            ft_lstmap_bonus \
            ft_lstnew_bonus \
            ft_lstsize_bonus \

NAME = libft.a
GCC = gcc
RM = rm -f
AR = ar rcs
CFLAGS = -Wall -Wextra -Werror
OBJS_DIR = ./
OBJ_M = $(addprefix $(OBJS_DIR), $(addsuffix .o, $(FILES_M)))
OBJ_B = $(addprefix $(OBJS_DIR), $(addsuffix .o, $(FILES_B)))
$(NAME):	${OBJ_M}
		${AR} ${NAME} ${OBJ_M}

all:	${NAME}

bonus:	${OBJ_B}
		${AR} ${NAME} ${OBJ_B}

clean:
		${RM} ${OBJ_M} ${OBJ_B}

fclean:	clean
		${RM} ${NAME}

re:	fclean all

.PHONY:     all clean fclean re