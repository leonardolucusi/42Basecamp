/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llucusi <llucusi@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 18:23:11 by jwesley-          #+#    #+#             */
/*   Updated: 2021/04/13 15:13:12 by llucusi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int		ft_str_is_uppercase(char *str)
{
	int i;
	int is_valid;

	i = 0;
	is_valid = 0;
	if (str[i] == '\0')
	{
		is_valid = 1;
		return (is_valid);
	}
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			is_valid = 1;
		}
		else
		{
			is_valid = 0;
			break ;
		}
		i++;
	}
	return (is_valid);
}

int ft_str_is_uppercase(char *str);

int        main(void)
{
    char *str;
    str = "FACEBOOK";
    printf("%i\n", ft_str_is_uppercase(str));
    return (0);
}