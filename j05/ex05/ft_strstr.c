/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgassend <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/08 13:53:34 by mgassend          #+#    #+#             */
/*   Updated: 2017/08/08 14:07:45 by mgassend         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char *occurrence;
	int i;
	int y;

	occurrence = 0;
	if (to_find[0] == '\0')
		return (str);
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == to_find[0])
		{
			occurrence = str + i;
			y = 0;
			while (str[i + y] == to_find[y])
			{
				if (to_find[y + 1] == '\0')
					return (occurrence);
				y++;
			}
			occurrence = 0;
		}
		i++;
	}
	return (0);
}
