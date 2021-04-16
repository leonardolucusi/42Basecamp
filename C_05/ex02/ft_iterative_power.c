/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llucusi <llucusi@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 18:41:51 by llucusi           #+#    #+#             */
/*   Updated: 2021/04/16 19:22:54 by llucusi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int ft_iterative_power(int nb, int power)
{
	int res;
	int i;
	int resu;
	
	resu = 1;
	i = 0;
	if(nb == 0 && power ==0)
	return(1);
	
	if(power < 0 || nb < 0)
	return(0);

	while (power > 0)
	{
		resu = nb * resu;
		power--;
	}
	return(resu);
}

int main(void)
{
	int res = (ft_iterative_power(3,5)); // 2^3= 2 * 2 * 2 ----> resultado: 8
	printf("%d\n", res);
}