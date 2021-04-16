/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llucusi <llucusi@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 17:52:34 by llucusi           #+#    #+#             */
/*   Updated: 2021/04/14 18:07:24 by llucusi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int i;
	
	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	return(dest);
}

int		main(void)
{
	char src[10] = "teste";
	char dest[10] = "oi";
	printf("dest é: "); printf("%s\n", dest);
	printf("Function ft_strcpy chamada  \n");
	printf("dest agora é: ");
	ft_strcpy(dest, src);
	//printf("%s\n", ft_strcpy(dest, src));
	printf("%s\n", dest);
}
