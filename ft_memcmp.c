/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milmi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 19:49:21 by milmi             #+#    #+#             */
/*   Updated: 2019/10/30 22:09:18 by milmi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *first, const void *second, size_t n)
{
	unsigned char	*fir;
	unsigned char	*sec;
	size_t			j;

	j = 0;
	fir = (unsigned char *)first;
	sec = (unsigned char *)second;
	while (n > 0)
	{
		if (fir[j] != sec[j])
			return (fir[j] - sec[j]);
		j++;
		n--;
	}
	return (0);
}
