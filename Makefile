NAME = push_swap

CC =		gcc
CGLAF =		-Wall -Wextra -Werror
SRCS =		push_swap.c arguman_check.c min_argument.c max_argument.c three_sort.c \
			rules/rulep.c rules/ruler.c rules/rulerr.c rules/rules.c \
			utils/ft_lstnew.c utils/ft_lstadd_front.c utils/ft_lstlast.c utils/ft_substr.c \
			utils/ft_lstsize.c utils/ft_atoi.c utils/ft_lstadd_back.c utils/ft_split.c \
			utils/ft_lstmap.c utils/ft_lstchange_value.c utils/ft_strdup.c

OBJS =		$(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
		$(CC) $(CGLAF) $(OBJS) -o $(NAME)

clean: $(OBJS)
		rm -rf $(OBJS)

fclean: clean
		rm -rf push_swap

re: all clean

.PHONY:			all clean fclean re