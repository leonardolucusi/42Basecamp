/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llucusi <llucusi@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 22:02:34 by llucusi           #+#    #+#             */
/*   Updated: 2021/04/12 22:14:22 by llucusi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int ft_strlen(char *str)
{
	int strLength;
	
	strLength = 0;
	while(*str != '\0')
	{	
		strLength ++;
		str++;
	}
	return (strLength);
}

int main(void)
{
	char str[] = "lol";
	printf("%d\n" ,ft_strlen(str));
}