/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milmi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 23:04:43 by milmi             #+#    #+#             */
/*   Updated: 2019/10/30 22:51:25 by milmi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ret;
	size_t	k;
	size_t	j;

	if (s1 == NULL || s2 == NULL)
		return (0);
	k = ft_strlen(s1);
	j = ft_strlen(s2);
	if (!(ret = (char *)ft_calloc(j + k + 1, sizeof(char))))
		return (0);
	j = 0;
	k = 0;
	while (s1[k] != '\0')
	{
		ret[k] = s1[k];
		k++;
	}
	while (s2[j] != '\0')
	{
		ret[k] = s2[j];
		j++;
		k++;
	}
	return (ret);
}
