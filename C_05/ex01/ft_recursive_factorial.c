/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llucusi <llucusi@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 18:12:36 by llucusi           #+#    #+#             */
/*   Updated: 2021/04/16 18:23:46 by llucusi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

// −2147483647, +2147483647
int ft_recursive_factorial(int nb)
{
	int i;
	int j;
	
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	else
		i = nb * ft_recursive_factorial(nb - 1);
	return (i);

}

int main(void)
{
	int res = (ft_recursive_factorial(5));
	printf("%d\n", res);
}