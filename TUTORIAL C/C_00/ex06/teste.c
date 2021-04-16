/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   teste.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llucusi <llucusi@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 18:12:19 by llucusi           #+#    #+#             */
/*   Updated: 2021/04/09 21:23:15 by llucusi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void ft_print_comb2(void);
void ft_putchar(char a1, char a2, char b1, char b2);

int main(void)
{
	ft_print_comb2();
}

void ft_putchar(char a1, char a2, char b1, char b2)
{
	write(1, &a1, 1);
	write(1, &a2, 1);
	write(1, " ", 1);
	write(1, &b1, 1);
	write(1, &b2, 1);
	write(1, ", ",2);
}

void ft_print_comb2(void)
{
	char a1 = '0';
	char a2 = '0';
	char b1 = '0';
	char b2 = '0';
	
	while(a1 <= '9')
	{		
		a2 = '1';
			while(a2 <= '9')
			{
				b1 = '1';
					while(b1 <= '9')
					{
							b2 = '1';
							while(b2 <= '9')
							{	
								//if(b2 != a2 || b1 != a1) 00 10
								if(a1 == b1 && a2 != b2){ft_putchar(a1,a2,b1,b2);}

								else if(a1 != b1 && a2 != b2){ft_putchar(a1,a2,b1,b2);}
								
								else if(a1 != b1 && a2 == b2 ){ft_putchar(a1,a2,b1,b2);}	
																							
								b2++;	
							}
					
					b1++;
					}
			a2++;
			}
	a1++;
	}
}