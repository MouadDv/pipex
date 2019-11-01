/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milmi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 02:43:52 by milmi             #+#    #+#             */
/*   Updated: 2019/10/30 02:43:58 by milmi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_calrows(char const *s, char c)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			j++;
			while (s[i + 1] != c && s[i + 1] != '\0')
				i++;
		}
		i++;
	}
	return (j);
}

int		ft_position(char const *str, char c, int *p1, int *p2)
{
	while (str[*p1] == c && str[*p1] != '\0')
		*p1 = *p1 + 1;
	*p2 = *p1;
	while (str[*p2] != c && str[*p2] != '\0')
		*p2 = *p2 + 1;
	return (*p2 - *p1 + 1);
}

void	ft_swapsplit(char const *str, char *dest, int *p1, int *p2)
{
	int i;
	int j;

	i = 0;
	j = *p2 - *p1;
	while (i < j)
	{
		dest[i] = str[*p1];
		i++;
		*p1 = *p1 + 1;
	}
}

void	ft_freethisshit(char **str, int rows)
{
	while (rows >= 0)
	{
		free(str[rows]);
		rows--;
	}
	free(str);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		h;
	char	**ret;

	i = 0;
	j = 0;
	h = 0;
	if (s == NULL)
		return (0);
	if ((ret = malloc((ft_calrows(s, c) + 1) * sizeof(char **))) == NULL)
		return (0);
	while (h < ft_calrows(s, c))
	{
		if ((ret[h] = ft_calloc(ft_position(s, c, &i, &j), sizeof(char)))
				== NULL)
		{
			ft_freethisshit(ret, h);
			return (NULL);
		}
		ft_swapsplit(s, ret[h], &i, &j);
		h++;
	}
	ret[h] = NULL;
	return (ret);
}
