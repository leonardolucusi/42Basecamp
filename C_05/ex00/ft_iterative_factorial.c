/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llucusi <llucusi@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 16:21:05 by llucusi           #+#    #+#             */
/*   Updated: 2021/04/16 17:48:22 by llucusi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

// −2147483647, +2147483647
int ft_iterative_factorial(int nb)
{
	int i;
	int j;

	i = 1;
	j = 1;
	if(nb == 0)
		return(0);
	if( nb < 0)
		return(1);
	while (i <= nb)
	{
		j = i * j;
		i++;
	}
	return (j);
}

int main(void)
{
	int res = (ft_iterative_factorial(5));
	printf("%d\n", res);
}