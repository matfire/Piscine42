/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   call_checks.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcahier <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/12 15:41:41 by pcahier           #+#    #+#             */
/*   Updated: 2017/08/13 21:28:01 by pcahier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

int		call_checks(char grid[9][9], int loc)
{
	int		i;
	int		j;
	char	c;

	i = loc / 9;
	j = loc % 9;
	c = '1';
	if (loc == 9 * 9)
		return (1);
	if (grid[i][j] != '.')
		return (call_checks(grid, loc + 1));
	while (c <= '9')
	{
		if (nin_row(c, grid, i) == 1 && nin_col(c, grid, j) == 1
				&& nin_blc(c, grid, i, j) == 1)
		{
			grid[i][j] = c;
			if (call_checks(grid, loc + 1))
				return (1);
		}
		c++;
	}
	grid[i][j] = '.';
	return (0);
}
