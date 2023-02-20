# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tdubois <tdubois@student.42angouleme.fr>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/21 00:19:04 by tdubois           #+#    #+#              #
#    Updated: 2023/02/20 13:24:05 by tdubois          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

################################################################################
### MAKECONF

SHELL			:=	bash
.SHELLFLAGS		:=	-e -o pipefail -c --
MAKEFLAGS		:=	--no-builtin-rules --no-print-directory --output-sync
.DEFAULT_GOAL	:=	all

.DELETE_ON_ERROR:
.SECONDEXPANSION:

################################################################################
### FILES

#GOALS
NAME	:=	libft.a

#DIRECTORIES
SRC		:=	src
INCLUDE	:=	include
BUILD	:=	build

#PREREQS
SRCS	:=	$(shell find $(SRC) -name '*.c')

#TARGETS
OBJS	:=	$(SRCS:%.c=$(BUILD)/%.o)
DEPS	:=	$(SRCS:%.c=$(BUILD)/%.d)
DIRS	:=	$(sort $(shell dirname $(OBJS)))

################################################################################
### MANDATORY CMDS

all: $(NAME)
	@:;
.PHONY: all

clean::
	rm -rf $(BUILD);
.PHONY: clean

fclean:: clean
	rm -rf $(NAME);
.PHONY: fclean

re:	fclean all
.PHONY: re

################################################################################
### CUSTOM CMDS

fast:
	$(MAKE) --jobs=8 all;
.PHONY: fast

refast: fclean fast
.PHONY: refast

################################################################################
### FLAGS

CC			:=	clang
CFLAGS		:=	-Wall -Wextra -Werror -O3
CPPFLAGS	:=	-MP -MMD -I$(INCLUDE)

################################################################################
### NAME TARGET

$(NAME): $(OBJS)
	$(LOG_TARGET)
	ar rcs $@ $(OBJS);

################################################################################
### OBJS TARGET

$(DIRS):
	$(LOG_TARGET)
	mkdir -p $@;

$(OBJS): $(BUILD)/%.o: %.c | $$(@D)
	$(LOG_TARGET)
	$(CC) $(CFLAGS) -c $(CPPFLAGS) $< -o $@;

-include $(DEPS)

################################################################################
### TOOLS

MAGENTA	:=	$(shell echo -e '\033[0;35m')
NC		:=	$(shell echo -e '\033[0m')

define LOG_TARGET
	$(info $(MAGENTA)Building $@:$(NC))
endef
