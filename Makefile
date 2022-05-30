NAME = RUNNER

SRC    = source/main.c\
    source/init.c\
    source/input.c\
    source/draw.c\
	source/player.c	
OBJ = $(SRC:.c=.o)

CFLAGS += -Werror -Wextra 
CFLAGS += -I./include

LIBS +=  -lSDL2 -lSDL2_image

all:	$(NAME)

$(NAME):	$(OBJ)
	$(CC)	$(OBJ)	$(LIBS)	-o	$(NAME)

clean: 
	rm -f $(OBJ)

fclean:        clean
	rm -f $(NAME)

re:     fclean all

.PHONY:        all obj clean fclean re