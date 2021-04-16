/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llucusi <llucusi@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 18:18:34 by jwesley-          #+#    #+#             */
/*   Updated: 2021/04/13 15:12:27 by llucusi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int		ft_str_is_lowercase(char *str)
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
		if (str[i] >= 'a' && str[i] <= 'z')
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

int ft_str_is_lowercase(char *str);

int        main(void)
{
    char *str;
    str = "facebook";
    printf("%i\n", ft_str_is_lowercase(str));
    return (0);
}
