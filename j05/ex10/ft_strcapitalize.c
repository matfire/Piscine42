/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgassend <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/09 07:53:02 by mgassend          #+#    #+#             */
/*   Updated: 2017/08/09 08:01:55 by mgassend         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int i;
	char c;
	int space;

	i = 0;
	while (str[i] != '\0')
	{
		space = 1;
		if (i == 0)
			c = ';';
		else
			c = str[i - 1];
		if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
			space = 0;
		if (space == 1 && str[i] >= 97 && str[i] <= 122)
			str[i] = str[i] - 32;
		if (space == 0 && str[i] >= 65 && str[i] <= 90)
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}
