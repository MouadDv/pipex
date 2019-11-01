/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milmi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/28 05:16:52 by milmi             #+#    #+#             */
/*   Updated: 2019/10/28 05:37:13 by milmi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstlast(t_list *lst)
{
	t_list *temp;

	temp = lst;
	if (temp == NULL)
		return temp; 
	while(temp->next != NULL)
	{
		temp = temp->next;
	}
	return temp;
}
