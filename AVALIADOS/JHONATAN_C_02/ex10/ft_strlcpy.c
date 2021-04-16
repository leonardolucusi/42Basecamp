/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llucusi <llucusi@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 20:27:45 by jwesley-          #+#    #+#             */
/*   Updated: 2021/04/13 15:21:45 by llucusi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int i;

	i = 0;
	while (src[i] != '\0' && i <= size)
	{
		dest[i] = src[i];
		i++;
	}
	return (i);
}

unsigned int    ft_strlcpy(char *dest, char *src, unsigned int size);

int                main(void)
{
    int     src_size;
    char     *src;
    char     *dest;

    src = calloc(11, sizeof(char));
    dest = calloc(8, sizeof(char));
    src = "alo galera";
    src_size = ft_strlcpy(dest, src, 8);
    printf("src: %s\n", src);
    printf("dest: %s\n", dest);
    printf("src_size: %d\n", src_size);
    return(0);
}