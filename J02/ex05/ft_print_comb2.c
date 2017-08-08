/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgassend <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/06 07:54:15 by mgassend          #+#    #+#             */
/*   Updated: 2017/08/08 11:44:37 by mgassend         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);
void	ft_print_num(int n);

void	ft_print_comb2(void)
{
	int comma;
	int i;
	int j;

	comma = 0;
	i = 0;
	while (i < 100)
	{
		j = i + 1;
		while (j < 100)
		{
			if (comma == 1) 
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			ft_print_num(i);
			ft_putchar(' ');
			ft_print_num(j);
			j++;
			comma = 1;
		}
		i++;
	}
}

void	ft_print_num(int n)
{
	char c2;
	char c1;

	c2 = '0' + (n / 10);
	ft_putchar(c2);
	c1 = '0' + (n % 10);
	ft_putchar(c1);
}
