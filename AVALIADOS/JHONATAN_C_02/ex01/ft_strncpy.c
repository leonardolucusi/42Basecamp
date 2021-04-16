/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llucusi <llucusi@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 16:19:25 by jwesley-          #+#    #+#             */
/*   Updated: 2021/04/13 15:07:04 by llucusi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char *ft_strncpy(char *dest, char *src, unsigned int n);

int        main(void)
{
    char *src = "Dont Panic!";
    char dest[sizeof(*src)];
    unsigned int n;

    n = 6;
    
    printf("=====Antes=====\n");
    printf("Src é: %s\n", src);
    printf("Dest é: %s\n", dest);
    ft_strncpy(dest, src, n);
    printf("=====Depois=====\n");
    printf("Agora dest é: %s\n", dest);
    printf("==========\n");
    return (0);
}