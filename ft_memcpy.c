/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milmi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 19:49:29 by milmi             #+#    #+#             */
/*   Updated: 2019/10/31 03:33:59 by milmi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	j;
	char	*p;
	char	*s;

	j = 0;
	p = (char*)dest;
	s = (char*)src;
	if (p == NULL && s == NULL)
		return (0);
	if (dest == src)
		return (0);
	while (j < n)
	{
		p[j] = s[j];
		j++;
	}
	return (dest);
}
