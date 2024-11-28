/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apieniak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 17:14:46 by apieniak          #+#    #+#             */
/*   Updated: 2024/11/28 16:08:32 by apieniak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	diff;
	int	*ptr;

	diff = max - min;
	ptr = malloc(sizeof(int) * diff);
	if (min >= max)
	{
		*ptr == NULL;
		return (ptr);
	}
	i = 0;
	while (i < max)
	{
		ptr[i] = min;
		i++;
		min++;
	}
	return (ptr);
}
