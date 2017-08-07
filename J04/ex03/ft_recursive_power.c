/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgassend <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/07 09:29:41 by mgassend          #+#    #+#             */
/*   Updated: 2017/08/07 09:32:06 by mgassend         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_power(int nb, int power)
{
	if (power == 0)
		nb = 1;
	if (power < 0)
		nb = 0;
	if (power-- > 1)
		nb = nb * ft_recursive_power(nb, power);
	return (nb);
}
