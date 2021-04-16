/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-oliv <dde-oliv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 22:56:56 by dde-oliv          #+#    #+#             */
/*   Updated: 2021/04/04 22:58:10 by dde-oliv         ###   ########.fr       */
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
			ft_putchar('*');
		}
		else if (count_column != x - 1)
		{
			ft_putchar(' ');
		}
		else
		{
			ft_putchar('*');
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
			ft_putchar('/');
		}
		else if (count_column == 0 && x == 1)
		{
			ft_putchar('/');
			ft_putchar('\n');
		}
		else if (count_column != x - 1)
		{
			ft_putchar('*');
		}
		else
		{
			ft_putchar('\\');
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
			ft_putchar('\\');
		}
		else if (count_column == 0 && x == 1)
		{
			ft_putchar('\\');
			ft_putchar('\n');
		}
		else if (count_column != x - 1)
		{
			ft_putchar('*');
		}
		else
		{
			ft_putchar('/');
			ft_putchar('\n');
		}
		count_column++;
	}
}

void	rush(int x, int y)
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
