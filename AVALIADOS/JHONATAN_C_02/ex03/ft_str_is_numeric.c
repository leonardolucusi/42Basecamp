/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llucusi <llucusi@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 18:09:40 by jwesley-          #+#    #+#             */
/*   Updated: 2021/04/13 15:11:09 by llucusi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int		ft_str_is_numeric(char *str)
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
		if (str[i] >= 48 && str[i] <= 57)
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

int ft_str_is_numeric(char *str);

int        main(void)
{
    char *str;

    str = "12344";
    printf("%i\n", ft_str_is_numeric(str));
    return (0);
}