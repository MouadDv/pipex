/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milmi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 03:14:23 by milmi             #+#    #+#             */
/*   Updated: 2019/10/30 23:19:02 by milmi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int				j;
	unsigned char	*str;
	char			*ret;

	j = 0;
	str = (unsigned char *)s;
	if (!s)
		return (NULL);
	while (str[j] != '\0')
		j++;
	ret = (char *)malloc(sizeof(char) * j + 1);
	if (ret != NULL)
	{
		j = 0;
		while (str[j] != '\0')
		{
			ret[j] = f(j, str[j]);
			j++;
		}
		ret[j] = '\0';
		return (ret);
	}
	return (0);
}
