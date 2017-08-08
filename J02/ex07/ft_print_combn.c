/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgassend <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/06 08:41:21 by mgassend          #+#    #+#             */
/*   Updated: 2017/08/08 11:45:19 by mgassend         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_print_screen(int *t, int size)
{
	int i;
	int islower;

	i = 1;
	islower = 1;
	while (i < size)
	{
		if (t[i - 1] >= t[i])
			islower = 0;
		i++;
	}
	if (islower)
	{
		i = 0;
		while (i < size)
			ft_putchar(t[i++] + '0');
		if (t[0] < (10 - size))
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
	}
}

void	ft_print_combn(int n)
{
	int i;
	int tab[n];

	i = 0;
	if (n == 1)
		while (i < 10)
			ft_putchar(i++ + '0');
	while (i < n)
		tab[i++] = 0;
	while (tab[0] <= (10 - n) && n > 1)
	{
		ft_print_screen(tab, n);
		tab[n - 1]++;
		i = n;
		while (i && n > 1)
		{
			i--;
			if (tab[i] > 9)
			{
				tab[i - 1]++;
				tab[i] = 0;
			}
		}
	}
}
