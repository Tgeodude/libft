SRC = ft_isalpha.c \
ft_isdigit.c \
ft_isalnum.c \
ft_isascii.c \
ft_isprint.c \
ft_strlen.c \
ft_memset.c \
ft_bzero.c \
ft_memcpy.c \
ft_strlcpy.c \
ft_strlcat.c \
ft_toupper.c \
ft_tolower.c \
ft_strchr.c \
ft_strrchr.c \
ft_strncmp.c \
ft_memchr.c \
ft_memcmp.c \
ft_strnstr.c \
ft_calloc.c \
ft_strdup.c \
ft_substr.c \
ft_strjoin.c \
ft_strtrim.c \
ft_memmove.c \
ft_strnstr.c \
ft_split.c \
ft_atoi.c \
ft_calloc.c \
ft_itoa.c \

OBJ = $(SRC:.c=.o)

BONUS = ft_lstnew_bonus.c \
ft_lstadd_front_bonus.c \
ft_lstsize_bonus.c \
ft_lstlast_bonus.c \
ft_lstadd_back_bonus.c \
ft_lstdelone_bonus.c \
ft_lstclear_bonus.c \
ft_lstiter_bonus.c \
ft_lstmap_bonus.c

BONUS_OBJ = $(BONUS:.c=.o)

CC = gcc

REMOVE = rm -f

CFLAGS = -Wall -Werror -Wextra

NAME = libft.a

all: $(NAME)

$(NAME): $(OBJ) libft.h Makefile
	ar rc $(NAME) $(OBJ)

clean:
	@$(REMOVE) $(OBJ) $(BONUS_OBJ)

fclean: clean
	@$(REMOVE) $(NAME)

re: fclean all

bonus: $(OBJ) $(BONUS_OBJ)
	ar rc $(NAME) $(OBJ) $(BONUS_OBJ)

.PHONY: all clean fclean re bonus
