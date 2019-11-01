/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milmi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 22:23:18 by milmi             #+#    #+#             */
/*   Updated: 2019/10/30 22:45:39 by milmi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ret;
	size_t	k;
	size_t	j;

	k = 0;
	j = 0;
	if (s == NULL)
		return (0);
	if (!(ret = (char *)ft_calloc(len + 1, sizeof(char))))
		return (0);
	while (k < start && s[k] != '\0')
		k++;
	if (s[k] == '\0')
		return (ret);
	while (s[k] != '\0' && j < len)
	{
		ret[j] = s[k];
		k++;
		j++;
	}
	ret[j] = '\0';
	return (ret);
}
