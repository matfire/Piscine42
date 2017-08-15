/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarandi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/12 16:55:54 by amarandi          #+#    #+#             */
/*   Updated: 2017/08/13 21:58:43 by pcahier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUDOKU_H
# define SUDOKU_H

int		invalid_input(int argc, char **argv);
void	duplicate_argv(char **argv, char array[9][9]);
int		validate_grid(char grid[9][9]);
int		call_checks(char grid[9][9], int loc);
int		call_checks2(char grid2[9][9], int loc);
int		grid_checker(char grid[9][9], char grid2[9][9]);
int		nin_row(char c, char grid[9][9], int x);
int		nin_col(char c, char grid[9][9], int y);
int		nin_blc(char c, char grid[9][9], int x, int y);
void	display_grid(char grid[9][9]);
#endif
