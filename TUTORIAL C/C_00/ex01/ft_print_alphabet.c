/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llucusi <llucusi@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 21:53:38 by llucusi           #+#    #+#             */
/*   Updated: 2021/04/03 06:43:57 by llucusi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_alphabet();

int main()
{
	ft_print_alphabet();
};

void ft_print_alphabet(void)
{
	char x = '`';
	while( x < 'z')
	{
		x++;
		write(1, &x, 1);
	}
};


