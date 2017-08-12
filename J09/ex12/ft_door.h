/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_door.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgassend <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 10:32:23 by mgassend          #+#    #+#             */
/*   Updated: 2017/08/11 10:47:18 by mgassend         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DOOR_H

#define FT_DOOR_H
#define TRUE			1
#define FALSE			0
#define OPEN			1
#define CLOSE			0
#define EXIT_SUCCESS	0

typedef	int	t_bool;
typedef	struct	s_door
{
	t_bool	state;
}				t_door;
t_bool	open_door(t_door*door);
t_bool	close_door(t_door*door);
t_bool	is_door_open(t_door*door);
t_bool	is_door_close(t_door*door);

#endif
