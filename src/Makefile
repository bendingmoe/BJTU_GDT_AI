CC	= gcc

NAME	= allum1

SRC	= allum1.c \
	  get_next_line.c \
	  parsallum.c \
	  my_puts.c \
	  my_strs.c \
	  my_getnbr.c \
	  my_putnbr.c \
	  two_players.c \
	  error.c \
	  my_ia.c \
	  ia_play.c \
	  line_number.c \
	  my_checks.c \
	  mode.c \
	  check_file.c \
	  players.c

RM	= rm -f

OBJ	= $(SRC:.c=.o)

all:	$(NAME)

$(NAME): $(OBJ)
	 $(CC) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all