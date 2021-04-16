/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llucusi <llucusi@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 01:08:12 by llucusi           #+#    #+#             */
/*   Updated: 2021/04/12 01:45:16 by llucusi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_swap(int *a, int *b);

void ft_swap(int *a, int *b)
{
	int swap;
	swap = *a;
	*a = *b;
	*b = swap;
	

	
	
}

int main (void)
{	
	int *x;
	int *y;
	int z = 10;
	int p = 20;
	x = &z;
	y = &p;
	ft_swap(x,y);
	printf("%d %d\n", *x, *y);
}