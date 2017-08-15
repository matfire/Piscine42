/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarandi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/12 11:23:03 by amarandi          #+#    #+#             */
/*   Updated: 2017/08/13 21:12:23 by pcahier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	nin_row(char c, char grid[9][9], int x)
{
	int	i;

	i = 0;
	while (i < 9)
	{
		if (grid[x][i] == c)
			return (0);
		i++;
	}
	return (1);
}

int	nin_col(int c, char grid[9][9], int y)
{
	int	i;

	i = 0;
	while (i < 9)
	{
		if (grid[i][y] == c)
			return (0);
		i++;
	}
	return (1);
}

int	nin_blc(char c, char grid[9][9], int x, int y)
{
	int x0;
	int	y0;

	x0 = x - (x % 3);
	y0 = y - (y % 3);
	x = x0;
	while (x < x0 + 3)
	{
		y = y0;
		while (y < y0 + 3)
		{
			if (grid[x][y] == c)
				return (0);
			y++;
		}
		x++;
	}
	return (1);
}
