# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: davide <davide@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/03/01 18:47:20 by dmandric          #+#    #+#              #
#    Updated: 2026/03/15 04:46:56 by davide           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #



NAME		= push_swap
CC		= cc
CFLAGS		= -Wall -Wextra -Werror
LIBFT_DIR	= libft
LIBFT		= $(LIBFT_DIR)/libft.a

SRC		= main.c \
		  push_swap.c \
		  utils.c \
		  moves/moves.c \
		  moves/pa_pb.c \
		  moves/sa_sb_ss.c \
		  moves/ra_rb_rr.c \
		  moves/rra_rrb_rrr.c

OBJ		= $(SRC:.c=.o)

all: $(NAME)

$(LIBFT):
	$(MAKE) -C $(LIBFT_DIR)

$(NAME): $(LIBFT) $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -L$(LIBFT_DIR) -lft -o $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -I. -I$(LIBFT_DIR) -c $< -o $@

clean:
	$(MAKE) -C $(LIBFT_DIR) clean
	rm -f $(OBJ)

fclean: clean
	$(MAKE) -C $(LIBFT_DIR) fclean
	rm -f $(NAME)

re: fclean all

run: all
	./$(NAME)

.PHONY: all clean fclean re run
