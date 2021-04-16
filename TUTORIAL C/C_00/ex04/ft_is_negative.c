/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llucusi <llucusi@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 07:14:34 by llucusi           #+#    #+#             */
/*   Updated: 2021/04/08 02:28:54 by llucusi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_is_negative(int n);
int main(void)
{
	ft_is_negative(42);
};
void ft_is_negative(int n)
{
	if(n < 0)
	{
		write(1,"N",1);
	}
	else if(n >= 0)
	{
		write(1,"P",1);
	}
};