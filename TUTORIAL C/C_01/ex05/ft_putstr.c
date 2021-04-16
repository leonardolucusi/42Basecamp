/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llucusi <llucusi@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 06:55:33 by llucusi           #+#    #+#             */
/*   Updated: 2021/04/14 17:36:36 by llucusi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>
#include <stdio.h>

void	ft_putstr(char *str)
{
	while (*str!='\0')
	{
		write(1, str, 1);
		str++;
	}
}

int	main(void)
{
	char *str = "alow galera\n";

	ft_putstr(str);
	return (0);
}