/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   call_checks2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcahier <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/12 15:41:41 by pcahier           #+#    #+#             */
/*   Updated: 2017/08/13 21:43:50 by pcahier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

int		call_checks2(char grid2[9][9], int loc)
{
	int		i;
	int		j;
	char	c;

	i = loc / 9;
	j = loc % 9;
	c = '1';
	if (loc == 0)
		return (1);
	if (grid2[i][j] != '.')
		return (call_checks2(grid2, loc - 1));
	while (c <= '9')
	{
		if (nin_row(c, grid2, i) == 1 && nin_col(c, grid2, j) == 1
				&& nin_blc(c, grid2, i, j) == 1)
		{
			grid2[i][j] = c;
			if (call_checks2(grid2, loc - 1))
				return (1);
		}
		c++;
	}
	grid2[i][j] = '.';
	return (0);
}
