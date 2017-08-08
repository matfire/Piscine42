/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgassend <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/05 10:03:55 by mgassend          #+#    #+#             */
/*   Updated: 2017/08/08 13:02:39 by mgassend         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);
void	ad_print_space(void);
void	ad_print_numbers(char a, char b, char c);

void	ft_print_comb(void)
{
	char a;
	char b;
	char c;



	a = '0';
	while (a <= '9')
	{
		b = a + 1;
		while (b <= '9')
		{
			c = b + 1;
			while (c <= '9')
			{
				ad_print_numbers(a, b, c);
				if (!(a == '7' && b == '8' && c == '9'))
				{
					ad_print_space();
				}
				c++;
			}
			b++;
		}
		a++;
	}
}

void	ad_print_numbers(char a, char b, char c)
{
	ft_putchar(a);
	ft_putchar(b);
	ft_putchar(c);
}

void	ad_print_space(void)
{
	ft_putchar(',');
	ft_putchar(' ');
}
