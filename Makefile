# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marvin <marvin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/07 20:46:42 by marvin            #+#    #+#              #
#    Updated: 2021/04/07 20:46:42 by marvin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS:
HEADER: ./libft.h
OBJS: ${SRCS: .o =.c}
CFLAGS: -Wall -Wextra -Werror
LIBRARY: libft.a

all:
