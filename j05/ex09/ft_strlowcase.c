/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgassend <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/09 07:49:55 by mgassend          #+#    #+#             */
/*   Updated: 2017/08/09 09:01:22 by mgassend         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcasecase(char *str)
{
	int i;

	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}