CXXFLAGS	:=	-Wall -Wextra
LDFLAGS		:=	-lsfml-audio

SRC	:=	soundcounter.cpp

OBJ	:=	$(SRC:.cpp=.o)

NAME	:=	soundcounter

.PHONY: all
all: $(NAME)

$(NAME): $(OBJ)
	$(LINK.cpp) $^ $(OUTPUT_OPTION)

.PHONY: clean
clean:
	rm -f $(OBJ)

.PHONY: fclean
fclean: clean
	rm -f $(NAME)

.PHONY: re
re: fclean all
