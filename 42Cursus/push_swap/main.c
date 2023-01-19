/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auferran <auferran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 23:35:46 by auferran          #+#    #+#             */
/*   Updated: 2023/01/19 01:47:33 by auferran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	if (argc != 2)
	{
		while (argv[i])
		{
			ft_atoi(argv[i]);
			i++;
		}
		ft_push_swap(argv);
	}
	return (0);
}
