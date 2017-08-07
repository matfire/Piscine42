/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgassend <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/07 09:06:40 by mgassend          #+#    #+#             */
/*   Updated: 2017/08/07 09:20:26 by mgassend         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int result;

	if (nb > 20 || nb < 0)
	{
		result = 1;
	}
	while (nb > 0)
	{
		result = result * nb;
		nb--;
	}
	return (result);
}
