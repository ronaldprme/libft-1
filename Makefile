# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tiagoliv <tiagoliv@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/31 13:28:54 by tiagoliv          #+#    #+#              #
#    Updated: 2023/07/28 21:27:31 by tiagoliv         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
OBJ_FOLDER = obj/

IS_FOLDER = is/
IS_FILES = ft_isalnum.c  ft_isalpha.c  ft_isascii.c  ft_isdigit.c  ft_isprint.c

MEM_FOLDER = mem/
MEM_FILES = ft_bzero.c  ft_calloc.c  ft_memchr.c  ft_memcmp.c  ft_memcpy.c  ft_memmove.c  ft_memset.c

PUT_FOLDER = put/
PUT_FILES = ft_putchar_fd.c  ft_putendl_fd.c  ft_putnbr_fd.c  ft_putstr_fd.c

STR_FOLDER = str/
STR_FILES = ft_atoi.c   ft_strchr.c  ft_striteri.c  ft_strlcpy.c  ft_strncmp.c  ft_strtrim.c  ft_toupper.c \
		ft_itoa.c   ft_strcpy.c  ft_strjoin.c   ft_strlen.c   ft_strnstr.c  ft_substr.c \
		ft_split.c  ft_strdup.c  ft_strlcat.c   ft_strmapi.c  ft_strrchr.c  ft_tolower.c

SOURCES = \
	$(addprefix $(IS_FOLDER), $(IS_FILES)) \
	$(addprefix $(MEM_FOLDER), $(MEM_FILES)) \
	$(addprefix $(PUT_FOLDER), $(PUT_FILES)) \
	$(addprefix $(STR_FOLDER), $(STR_FILES))

BONUS_FOLDER = lst/
BONUS_FILES = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c \
	ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c
BSOURCES = $(addprefix $(BONUS_FOLDER), $(BONUS_FILES))

OBJECTS =  $(SOURCES:.c=.o)
BOBJECTS = $(BSOURCES:.c=.o)

CC = gcc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(OBJ_FOLDER):
	mkdir -p $(OBJ_FOLDER)

$(NAME): $(OBJ_FOLDER) $(OBJECTS)
	$(AR) -r $@ $(addprefix $(OBJ_FOLDER), $(notdir $(OBJECTS)))

bonus: $(OBJ_FOLDER) $(OBJECTS) $(BOBJECTS)
	$(AR) -r $(NAME) $(addprefix $(OBJ_FOLDER), $(notdir $(OBJECTS)) $(notdir $(BOBJECTS)))

%.o: %.c
	$(CC) -c $(CFLAGS) $^ -o $(OBJ_FOLDER)$(notdir $(<:.c=.o))

clean:
	rm -rf $(OBJ_FOLDER)* $(OBJ_FOLDER)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re