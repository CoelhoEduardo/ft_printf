NAME=libftprintf.a

SRCS=ft_printf_utils.c main.c 

OBJ=$(SRCS:.c=.o)

CC=cc

CFLAGS=-Wall -Wextra -Werror

all:	${NAME}

${NAME}:	${OBJ}

%.o:	%.c ft_printf.h 
	${CC} ${CFLAGS} -c $< -o $@
	ar -rcs ${NAME} $@

clean:
	rm -f ${OBJ}

fclean:	clean
	rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean re bonus

