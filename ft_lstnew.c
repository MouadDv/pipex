/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milmi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/28 00:53:02 by milmi             #+#    #+#             */
/*   Updated: 2019/10/30 23:24:02 by milmi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*temp;

	if ((temp = malloc(sizeof(t_list))))
	{
		temp->content = content;
		temp->next = NULL;
		return (temp);
	}
	else
		return (0);
}
