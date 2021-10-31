/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: KgCloud <KgCloud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 02:31:06 by KgCloud           #+#    #+#             */
/*   Updated: 2021/10/31 02:31:06 by KgCloud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "swap.h"

void	swap(t_pushswap *s)
{
	int temp;

	temp = s->nbs[0];
	s->nbs[0] = s->nbs[1];
	s->nbs[1] = temp;
}

void	rotate(t_pushswap *s)
{
	int temp;
	int i;

	i = 0;
	while(i < s->max_size)
	{
		s->nbs[i + 1] = s->nbs[i];
	}
}

//check feuille de papier systeme de rond + systeme de depart mouvant + systeme de long long + oublie pas de modifer t struc et de tout bien init 