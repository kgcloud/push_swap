/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: canjugun <canjugun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 17:00:11 by canjugun          #+#    #+#             */
/*   Updated: 2021/10/30 22:21:14 by canjugun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "swap.h"

int	main(int ac, char **av)
{
	t_pushswap *a;
	t_pushswap *b;
	int nb[ac - 1];
	int	i;
	int x;

	if (ac > 1)
	{
		//printf("%d\n", ac);
		i = 1;
		while(i < ac)
		{
			/*while(av[i][x])
			{
				if ((!(av[i][x] >= '0' && av[i][x] <= '9')) || av[i][x] == ' ')
				{	
					printf("%c\n", av[i][x]);
					return(print("error"));
				}
				x++;	
			}*/
			nb[i - 1] = ft_atoi(av[i]);
			i++;
		}
		for(int y = 0; nb[y]; y++)
			printf("%d\n", nb[y]);
	}
	return (0);
}