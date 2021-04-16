/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llucusi <llucusi@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 22:56:29 by llucusi           #+#    #+#             */
/*   Updated: 2021/04/14 01:45:45 by llucusi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_str_is_alpha(char *str)
{
	int i;

	i = 0;
	if(str[i] == '\0')
		{
			return(1);
		}
	while (str[i] != '\0')
	{
		if((str[i] > 96 && str[i] < 123) || (str[i] > 64 && str[i] < 91))
		{
			i++;
		}
		else
			return(0);
	}
	return(1);
}

int	main(void)
{
	char *str1;
	char *str2;
	char *str3;
	char *str4;

	str1 = calloc(10, sizeof(char));
	str2 = calloc(10, sizeof(char));
	str3 = calloc(10, sizeof(char));
	str4 = calloc(10, sizeof(char));
	str1 = "!@#$!";
	str2 = "AbCD";
	str3 = "2bCd]sgHi";
	str4 = "";
	printf("str1: %s, is_aplha: %d\n", str1, ft_str_is_alpha(str1));
	printf("str2: %s, is_aplha: %d\n", str2, ft_str_is_alpha(str2));
	printf("str3: %s, is_aplha: %d\n", str3, ft_str_is_alpha(str3));
	printf("str4: %s, is_aplha: %d\n", str4, ft_str_is_alpha(str4));
	return (0);
}
