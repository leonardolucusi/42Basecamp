/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llucusi <llucusi@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 15:47:31 by jwesley-          #+#    #+#             */
/*   Updated: 2021/04/13 18:34:20 by llucusi          ###   ########.fr       */
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
	dest[i] = '\0';
	return (dest);
}

char *ft_strcpy(char *dest, char *src);

int        main(void)
{
    char *src = "Dont Panic!";;
    char dest[sizeof(*src)];
    
    printf("=====Antes=====\n");
    printf("Src é: %s\n", src);
    printf("Dest é: %s\n", dest);
    ft_strcpy(dest, src);
    printf("=====Depois=====\n");
    printf("Agora dest é: %s\n", dest);
    printf("==========\n");
    return (0);
}
