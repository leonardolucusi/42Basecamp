/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llucusi <llucusi@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 22:02:34 by llucusi           #+#    #+#             */
/*   Updated: 2021/04/14 17:51:11 by llucusi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int strlength;

	strlength = 0;
	while (*str != '\0')
	{
		strlength++;
		str++;
	}
	return (strlength);
}
