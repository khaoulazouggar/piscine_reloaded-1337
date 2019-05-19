/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzouggar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/30 00:23:30 by kzouggar          #+#    #+#             */
/*   Updated: 2019/03/31 22:37:53 by kzouggar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *str;
	int i;
	int len;

	if (min >= max)
		return (NULL);
	i = 0;
	len = max - min;
	str = (int *)malloc(sizeof(min) * len);
	if (str == NULL)
		return (NULL);
	while (i < len)
	{
		str[i] = min + i;
		i++;
	}
	return (str);
}
