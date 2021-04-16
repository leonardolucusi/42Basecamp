/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llucusi <llucusi@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 18:59:55 by llucusi           #+#    #+#             */
/*   Updated: 2021/04/13 22:49:13 by llucusi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return(dest);
}

int main(void)
{
	char src[13] = "Testando"; 
	char dest[13] = "";
	unsigned int n;
	n = 5;
	ft_strncpy(dest, src, n);
	printf("%s\n", dest);
}