/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarandi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/12 16:55:54 by amarandi          #+#    #+#             */
/*   Updated: 2017/08/13 23:17:38 by pcahier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include "sudoku.h"

int	main(int argc, char **argv)
{
	char	grid[9][9];
	char	grid2[9][9];

	if (invalid_input(argc, argv) != 0)
	{
		write(1, "Error\n", 6);
		return (1);
	}
	duplicate_argv(argv, grid);
	duplicate_argv(argv, grid2);
	if (!validate_grid(grid))
	{
		write(1, "Error\n", 6);
		return (1);
	}
	call_checks(grid, 0);
	call_checks2(grid2, 81);
	if (grid_checker(grid, grid2))
		display_grid(grid);
	else
		write(1, "Error\n", 6);
	return (0);
}
