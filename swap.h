/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: canjugun <canjugun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 16:58:48 by canjugun          #+#    #+#             */
/*   Updated: 2021/10/30 21:53:31 by canjugun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SWAP_H
# define SWAP_H

# include <stdio.h>
# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>
# include <limits.h>

typedef struct	s_pushswap
{
	int	max_size;
	int	*nbs;
	int top;
}				t_pushswap;

/*typedef struct	s_push
{
	
}				t_push*/

int	ft_atoi(const char *str);
int	print(char *str);

#endif