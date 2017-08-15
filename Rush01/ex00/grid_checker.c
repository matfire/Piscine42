/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grid_checker.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcahier <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/13 19:54:49 by pcahier           #+#    #+#             */
/*   Updated: 2017/08/13 21:44:21 by pcahier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"
#include <stdio.h>

int		grid_checker(char grid[9][9], char grid2[9][9])
{
	int		i;
	int		j;
	int		result;

	i = 0;
	j = 0;
	result = 0;
	while (j < 9)
	{
		while (i < 9)
		{
			if (grid[i][j] == grid2[i][j])
				result++;
			i++;
		}
		j++;
		i = 0;
	}
	if (result == 81)
		return (1);
	else
		return (0);
}
