/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milmi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 15:46:56 by milmi             #+#    #+#             */
/*   Updated: 2019/10/30 23:16:56 by milmi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_find(char c, char const *set)
{
	int	j;

	j = 0;
	while (set[j] != '\0')
	{
		if (set[j] == c)
			return (1);
		j++;
	}
	return (0);
}

void	ft_norm(int start, int j, int *len)
{
	if (start > j + 1)
		*len = 1;
	else
		*len = j + 2 - start;
}

void	ft_swaptrim(char *ret, char const *s1, int len, int j)
{
	while (len >= 0)
	{
		ret[len] = s1[j];
		len--;
		j--;
	}
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ret;
	int		j;
	int		start;
	int		len;

	if (s1 == NULL || set == NULL)
		return (0);
	j = 0;
	while (ft_find(s1[j], set))
		j++;
	start = j;
	while (ft_find(s1[j], set))
		j++;
	start = j;
	j = ft_strlen(s1) - 1;
	while (j >= 0 && ft_find(s1[j], set) == 1)
		j--;
	ft_norm(start, j, &len);
	if ((ret = ft_calloc(len, sizeof(char))) == NULL)
		return (0);
	len -= 2;
	ft_swaptrim(ret, s1, len, j);
	return (ret);
}
