/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llucusi <llucusi@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 06:45:37 by llucusi           #+#    #+#             */
/*   Updated: 2021/04/03 06:49:16 by llucusi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_reverse_alphabet(void);

int main()
{
	ft_print_reverse_alphabet();
};

void ft_print_reverse_alphabet(void)
{
	char x = '{';
	while( x > 'a')
	{
		x--;
		write(1, &x, 1);
	}
};