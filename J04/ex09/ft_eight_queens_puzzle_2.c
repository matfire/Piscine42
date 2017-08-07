/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eight_queens_puzzle_2.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgassend <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/07 14:54:42 by mgassend          #+#    #+#             */
/*   Updated: 2017/08/07 15:50:59 by mgassend         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_putchar(char c);
int		absolute(int a, int b);
void	solution(int n, int *hist);
void	solve(int n, int col, int *hist);

int		ft_eight_queens_puzzle_2(void)
{
	int hist[8];

	solve(8, 0, hist);
	ft_putchar('\n');
	return (0);
}

int		absolute(int a, int b)
{
	if (a >= b)
		return (a - b);
	else
		return (b - a);
}

void	solution(int n, int *hist)
{
	int i;
	int j;

	i = 0;
	while (i < n)
	{
		j = 0;
		while (j < n)
		{
			if (j == hist[i])
				ft_putchar(j + 48 + 1);
			j++;
		}
		i++;
	}
	ft_putchar('\n');
}

void	solve(int n, int col, int *hist)
{
	int i;
	int j;

	if (col == n)
		solution(n, hist);
	i = 0;
	while (i < n)
	{
		j = 0;
		while (j < col && !(hist[j] == i || absolute(hist[j], i) == col - j))
			j++;
		if (j < col)
		{
			i++;
			continue;
		}
		hist[col] = i;
		solve(n, col + 1, hist);
		i++;
	}
}

int		main(void)
{
	ft_eight_queens_puzzle_2();
	return (0);
}
