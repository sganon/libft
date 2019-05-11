# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sganon <sganon@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/11/29 17:11:57 by sganon            #+#    #+#              #
#    Updated: 2019/05/11 19:55:31 by simon            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC=gcc
CC_FLAGS = -Wall -Werror -Wextra -O3
INC_FLAG = -I./


NAME ?= libft.a
TEST_NAME ?= libft_tests

BUILD_DIR ?= ./build
SRC_DIRS ?= ./src

OS = $(shell uname)
ifeq ($(OS), Linux)
	SRCS = $(shell find src -regex '[a-zA-Z.\/_0-9]+\.c$$')
	TEST_SRCS = $(shell find tests -regex '[a-zA-Z.\/_0-9]+\.c$$')
endif
ifeq ($(OS), Darwin)
	SRCS = $(shell find -E src -regex '[a-zA-Z.\/_0-9]+\.c$$' | sed 's|^./||')
	TEST_SRCS = $(shell find -E tests -regex '[a-zA-Z.\/_0-9]+\.c$$' | sed 's|^./||')
endif

OBJS := $(SRCS:%=$(BUILD_DIR)/%.o)
TEST_OBJS := $(TEST_SRCS:%=$(BUILD_DIR)/%.o)

$(BUILD_DIR)/%.c.o: %.c
	@mkdir -p $(dir $@)
	@printf "\e[36mCompiling $< to object\e[0m\n"
	@$(CC) $(CC_FLAGS) -c $< -o $@ $(INC_FLAG)
	@printf "\e[32m$@ created\e[0m\n"

all : $(NAME)

$(NAME): libft.h $(OBJS)
	@printf "\e[36mGenerating $(NAME)\e[0m\n"
	@ar rc $(NAME) $(OBJS)
	@ranlib $(NAME)
	@printf "\e[32m$(NAME) generated\e[0m\n"

clean:
	@rm -rf $(BUILD_DIR)
	@printf "\e[32mObjects cleaned\e[0m\n"

fclean : clean
	@rm -f $(NAME)
	@printf "\e[32m$(NAME) cleaned\e[0m\n"

re : fclean all

test: $(NAME) tests/tests.h $(TEST_OBJS)
	@printf "\e[36mGenerating $(TEST_NAME)\e[0m\n"
	@$(CC) $(CC_FLAGS) -o $(TEST_NAME) $(TEST_OBJS) -L./ -lft
	@printf "\e[32mGenerating $(TEST_NAME)\e[0m\n"

run_test: test
	./$(TEST_NAME)

.PHONY : all clean fclean re run_test

