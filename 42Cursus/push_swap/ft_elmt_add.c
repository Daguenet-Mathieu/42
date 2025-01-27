/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_elmt_add.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auferran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 22:06:48 by auferran          #+#    #+#             */
/*   Updated: 2023/01/24 09:49:45 by auferran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_elmt_size(t_elmt *first_a)
{
	int	i;
	t_elmt	*tmp;

	if (!first_a)
		return (0);
	i = 1;
	tmp = first_a;
	while (tmp->next != first_a)
	{
		tmp = tmp->next;
		i++;
	}
	return (i);
}

t_elmt	*ft_elmt_last(t_elmt *first_a)
{
	int	i;
	int	len;

	i = 0;
	len = ft_elmt_size(first_a);
	while (i < len -1)
	{
		first_a = first_a->next;
		i++;
	}
	return (first_a);
}

t_elmt	*ft_elmt_new(int number, t_elmt *first_a)
{
	t_elmt	*new;

	new = malloc(sizeof(t_elmt));
	if (!new)
		return (NULL);
	new->nb = number;
	new->next = first_a;
	return (new);
}

void	ft_add_back(t_elmt **first_a, t_elmt *new)
{
	t_elmt	*tmp;

	if (*first_a == NULL)
	{
		*first_a = new;
		return ;
	}
	tmp = ft_elmt_last(*first_a);
	tmp->next = new;
	*first_a->prev = new;
	new->prev = tmp;
}
