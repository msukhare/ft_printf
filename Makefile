
SRC_PATH = srcs/

SRC_NAME = ft_printf.c \
		   ft_managbuff.c\
		   ft_check.c \
		   ft_getflag.c \
		   ft_addoption_tochar.c \
		   ft_changstring.c \
		   ft_convertion.c \
		   ft_getunicode.c \
		   ft_getstring.c\
		   ft_mv_or_add.c\
		   ft_newvar.c \
		   ft_strlen.c \
		   ft_strjoin.c \
		   ft_strdup.c \
		   ft_strcpy.c \
		   ft_rev.c \
		   ft_memalloc.c \
		   ft_bzero.c \
		   ft_atoi.c \
		   ft_strcat.c \
		   ft_ulltoa.c \
		   ft_ulltoa_base.c\
		   ft_strjoinfree.c \
		   ft_lltoa.c \

OBJ_PATH = obj/

CPPFLAGS = -I include/

NAME = libftprintf.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror

OBJ_NAME = $(SRC_NAME:.c=.o)

SRC = $(addprefix $(SRC_PATH),$(SRC_NAME))

OBJ = $(addprefix $(OBJ_PATH),$(OBJ_NAME))

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

$(OBJ_PATH)%.o: $(SRC_PATH)%.c
	@mkdir $(OBJ_PATH) 2> /dev/null || true
	$(CC) $(CFLAGS) $(CPPFLAGS) -o $@ -c $<

clean:
	@rm -vf $(OBJ)
	@rmdir $(OBJ_PATH) 2> /dev/null || true

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: al, clean, fclean, re
