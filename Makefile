##
## EPITECH PROJECT, 2023
## Makefile
## File description:
## Makefile
##

BUILD_DIR	=	build

SRC_TEST	=	test/tester.c

SRC	=	\
		src/str_split.c		\
		src/my_calloc.c		\
		\
		src/is_a_command.c	\
		src/prompt.c

OBJ_TEST	=	$(SRC_TEST:.c=.o)

OBJ	=	$(SRC:%.c=$(BUILD_DIR)/%.o)

LIBNAME	=	lib.a

NAME	=	file_system

CFLAGS	=	-Wall -Werror -Wextra -I./include -g
TEST_FLAGS	=	-lcriterion --coverage

$(BUILD_DIR)/%.o:%.c
	@mkdir -p $(@D)
	@gcc $(CFLAGS) -c $< -o $@

all:	$(NAME)

$(NAME):	$(OBJ)
	ar rc $(LIBNAME) $(OBJ)
	gcc -o $(NAME) $(CFLAGS) $(SRC) src/main.c

build_test:	$(OBJ) $(OBJ_TEST)
	gcc $(CFLAGS) $(TEST_FLAGS) $^ -o test_run

test_run:	build_test
	./test_run

clean_test:
	@rm -f test_run
	@rm -f test/tester.o

clean:
	@rm -rf $(BUILD_DIR)

fclean:	clean clean_test
	@rm -f $(NAME)
	@echo "build done"

re:	fclean all

.PHONY:	all clean fclean re
