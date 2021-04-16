/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llucusi <llucusi@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 03:23:45 by llucusi           #+#    #+#             */
/*   Updated: 2021/04/12 05:46:38 by llucusi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod)
{	
	*div = a / b;
	*mod = a % b;
}
int main (void)
{
	int div_a;
	int div_b;
    int *div;
    int *mod;
    div = &div_a;
    mod = &div_b;
    div_a = 30;
    div_b = 10;
	
    ft_div_mod(div_a, div_b, div, mod);
    printf("%d, %d\n", *div, *mod);
}