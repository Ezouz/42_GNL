NAME = test_gnl
CC = clang
CC_LIB = -L libft/ -lft 
CFLAGS = -Wall -Wextra -Werror
SRCS = main.c
GNL = get_next_line.c
OBJS = $(SRCS:.c=.o)
OBJ =  $(GNL:.c=.o)
INCL = -I libft/includes

.PHONY: all
all: $(NAME)

.PHONY: $(NAME)
$(NAME): $(OBJS)
	make -C libft/ fclean && make -C libft/
	$(CC) -o $(NAME) $(OBJS) $(OBJ) $(INCL) $(CC_LIB)

%.o: %.c
	$(CC) $(CFLAGS) $(INCL) -o $(OBJS) -c $(SRCS)
	$(CC) $(CFLAGS) $(INCL) -o $(OBJ) -c $(GNL)

.PHONY: clean
clean:
	rm -f $(OBJS) $(OBJ)

.PHONY: fclean
fclean: clean
	rm -f $(NAME)

.PHONY: re
re: fclean all
