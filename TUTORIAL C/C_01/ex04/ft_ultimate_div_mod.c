/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llucusi <llucusi@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 02:09:25 by llucusi           #+#    #+#             */
/*   Updated: 2021/04/12 06:54:44 by llucusi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b);

void ft_ultimate_div_mod(int *a, int *b)
{
	int reserva;
	reserva = *a;
	*a = *a / *b;
	*b = reserva % *b;
}

int main (void)
{
	int *a;
	int *b;
	int x = 13;
	int y = 7;
	a = &x;
	b = &y;
	ft_ultimate_div_mod(a, b);
	printf("%d %d\n", *a, *b);
	
}