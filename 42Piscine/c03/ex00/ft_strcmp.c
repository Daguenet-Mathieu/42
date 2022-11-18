/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auferran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 13:17:03 by auferran          #+#    #+#             */
/*   Updated: 2022/09/25 14:58:30 by auferran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}	
	return (s1[i] - s2[i]);
}

/*
int	main(void)
{	
	char	s1[] = "taxt";
	char	s2[] = "test";

	printf("%d\n", ft_strcmp(s1, s2));
}
*/
