/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llucusi <llucusi@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 07:22:30 by llucusi           #+#    #+#             */
/*   Updated: 2021/04/08 01:52:03 by llucusi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
/* 	no terminal> gcc ft_print_comb.c main.c -o main
	no terminal> ./main  */
void ft_putchar(char x, char y, char z)
{
	write(1, &x, 1);
	write(1, &y, 1);
	write(1, &z, 1);
	if(x != '7' || y != '8' || z != '9')
	{
		
		write(1,", ", 2);		
	}		
};

void ft_print_comb(void)
{
	char u,d,c;
	
	
	u = '0';
	while (u <= '7')
	{
		d = u + 1;
		while(d <= '8')
		{
			c = d + 1;
			while(c <= '9')
			{				
				ft_putchar(u, d, c);
				c++;
			}
		d++;
		}
	u++; 
	}
};
