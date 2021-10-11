SRCS = ft_bzero.c ft_memmove.c ft_strlcat.c  ft_strrchr.c  ft_memchr.c  ft_memset.c ft_strlcpy.c  ft_tolower.c ft_memcmp.c  ft_memset_prov.c  ft_strlen.c ft_toupper.c ft_memcpy.c ft_strchr.c ft_strnstr.c

OBJS = ${SRCS:.c=.o}

NAME = a.out

CC = @cc
RM = @rm -f

CFLAGS = -Wall -g

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}: ${OBJS}
	${CC} -o ${NAME} ${OBJS} 


all: ${NAME}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all

