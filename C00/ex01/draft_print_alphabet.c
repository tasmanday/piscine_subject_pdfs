/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmitchel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 16:31:02 by tmitchel          #+#    #+#             */
/*   Updated: 2023/05/18 16:36:51 by tmitchel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */




#include <unistd.h>

void ft_print_alphabet(void);

int main(void)
{
	ft_print_alphabet();
}

void ft_print_alphabet(void)
{
	for(char c = 'a'; c <= 'z'; c++)
	{
		write(1, &c, 1);
	}
}
