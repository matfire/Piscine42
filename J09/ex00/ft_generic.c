/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_generic.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgassend <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/10 16:45:33 by mgassend          #+#    #+#             */
/*   Updated: 2017/08/10 17:24:11 by mgassend         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_generic(void)
{
	char	*str;
	int		i;

	i = 0;
	str = "Tut tut ; Tut tut\n";
	while (str[i] != '\0')
		i++;
	write(1, str, i);
}
