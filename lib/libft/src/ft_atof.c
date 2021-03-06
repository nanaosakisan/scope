/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atof.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iporsenn <iporsenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/03 15:43:29 by iporsenn          #+#    #+#             */
/*   Updated: 2020/03/15 12:57:45 by iporsenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

double	ft_atof(const char *str)
{
	double	res;
	double	dec;
	int		neg;
	char	**split;

	res = 0;
	dec = 0;
	neg = 1;
	split = ft_strsplit(str, '.');
	if (split[0])
	{
		res = ft_atoi(split[0]);
		if (ft_strchr(split[0], '-') && (res > -1 && res < 1))
			neg = -1;
	}
	if (split[1])
	{
		dec = (float)ft_atoi(split[1]);
		while ((int)dec > 0)
			dec = dec / 10;
	}
	res += dec;
	res *= neg;
	return (res);
}
