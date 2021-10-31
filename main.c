/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: KgCloud <KgCloud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 17:00:11 by canjugun          #+#    #+#             */
/*   Updated: 2021/10/31 02:28:23 by KgCloud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "swap.h"

int	dejatrie(t_pushswap *a)
{
	int i;
	int nb;

	i = 1;
	nb = a->nbs[0];
	while(i < a->max_size)
	{
		if (nb > a->nbs[i])
			return(0);
		nb = a->nbs[i];
		i++;
	}
	return(1);
}

int	main(int ac, char **av)
{
	t_pushswap *a;
	t_pushswap *b;
	int	i;
	
	if (ac > 1)
	{
		i = 0;
		a = malloc(sizeof(t_pushswap));
		b = malloc(sizeof(t_pushswap));
		a->nbs = malloc(sizeof(int) * ac);
		b->nbs = malloc(sizeof(int) * ac);
		while(++i < ac )
			a->nbs[i - 1] = ft_atoi(av[i]);
		a->max_size = i - 1;
		/*printf("%d\n", a->max_size);
		for(int y = 0; y < ac - 1; y++)
			printf("%d\n", a->nbs[y]);*/
		if (dejatrie(a) == 0)
		{
			printf("pas trier");
		}
	}
	free(a->nbs);
	free(b->nbs);
	free(b);
	free(a);
	return (0);
}