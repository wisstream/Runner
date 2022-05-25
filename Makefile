NAME = RUNNER

SRC    = source/main.c\
      source/init.c\
      source/input.c\

OBJ = $(SRC:.c=.o)

CFLAGS += -Werror -Wextra 
CFLAGS += -I./include

LIBS +=  -lSDL2_image -lSDL2_ttf

all:	$(NAME)

$(NAME):	$(OBJ)
	$(CC)	$(OBJ)	$(LIBS)	-o	$(NAME)	sdl2-config	--libs	--cflags

clean: 
	rm -f $(OBJ)

fclean:        clean
	rm -f $(NAME)

re:     fclean all

.PHONY:        all obj clean fclean re