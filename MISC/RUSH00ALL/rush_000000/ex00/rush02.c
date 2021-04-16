/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-oliv <dde-oliv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 23:02:54 by dde-oliv          #+#    #+#             */
/*   Updated: 2021/04/03 02:02:56 by dde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_middleline(int x)
{
	int count_column;

	count_column = 0;
	while (count_column < x)
	{
		if (count_column == 0 && x != 1)
		{
			ft_putchar('B');
		}
		else if (count_column != x - 1)
		{
			ft_putchar(' ');
		}
		else
		{
			ft_putchar('B');
			ft_putchar('\n');
		}
		count_column++;
	}
}

void	print_firstline(int x)
{
	int count_column;

	count_column = 0;
	while (count_column < x)
	{
		if (count_column == 0 && x != 1)
		{
			ft_putchar('A');
		}
		else if (count_column != x - 1)
		{
			ft_putchar('B');
		}
		else
		{
			ft_putchar('A');
			ft_putchar('\n');
		}
		count_column++;
	}
}

void	print_lastline(int x)
{
	int count_column;

	count_column = 0;
	while (count_column < x)
	{
		if (count_column == 0 && x != 1)
		{
			ft_putchar('C');
		}
		else if (count_column != x - 1)
		{
			ft_putchar('B');
		}
		else
		{
			ft_putchar('C');
			ft_putchar('\n');
		}
		count_column++;
	}
}

void	rush02(int x, int y)
{
	int count_line;

	count_line = 0;
	while (count_line < y)
	{
		if (count_line == 0)
		{
			print_firstline(x);
		}
		else if (count_line != y - 1)
		{
			print_middleline(x);
		}
		else
		{
			print_lastline(x);
		}
		count_line++;
	}
}
