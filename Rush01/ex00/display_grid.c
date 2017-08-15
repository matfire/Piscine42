/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_grid.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcahier <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/12 14:56:29 by pcahier           #+#    #+#             */
/*   Updated: 2017/08/13 23:08:41 by pcahier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		check_grid(char grid[9][9])
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (j < 9)
	{
		while (i < 9)
		{
			if (grid[j][i] == '.')
			{
				write(1, "Error\n", 6);
				return (0);
			}
			i++;
		}
		i = 0;
		j++;
	}
	return (1);
}

void	display_grid(char grid[9][9])
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (check_grid(grid))
	{
		while (j < 9)
		{
			while (i < 9)
			{
				write(1, &grid[j][i], 1);
				if (i < 8)
					write(1, " ", 1);
				i++;
			}
			write(1, "\n", 1);
			i = 0;
			j++;
		}
	}
}
