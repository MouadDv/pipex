/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milmi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/28 05:37:29 by milmi             #+#    #+#             */
/*   Updated: 2019/10/28 06:13:37 by milmi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list  *temp;

	if (*alst == NULL)
		*alst = new;
	else
	{
		temp = ft_lstlast(*alst);
		new->next = temp->next;
		temp->next = new;
	}
}
