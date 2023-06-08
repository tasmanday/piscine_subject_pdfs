# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tmitchel <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/07 10:13:58 by tmitchel          #+#    #+#              #
#    Updated: 2023/06/07 10:15:25 by tmitchel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

cc -c -Wall -Werror -Wextra ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c
ar -rc libft.a ft_putchar.o ft_swap.o ft_putstr.o ft_strlen.o ft_strcmp.o
ranlib libft.a
rm ft_putchar.o ft_swap.o ft_putstr.o ft_strlen.o ft_strcmp.o
