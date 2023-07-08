/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbadalia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 14:48:20 by nbadalia          #+#    #+#             */
/*   Updated: 2023/07/07 14:48:22 by nbadalia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	butterfly(t_list **a, t_list **b, int n)
{
	int	count;

	count = 0;
	while ((*a))
	{
		if ((*a)->index <= count)
		{
			pb(a, b);
			ra_rb(b, 2);
			count++;
		}
		else if ((*a)->index <= count + n)
		{
			pb(a, b);
			count++;
		}
		else
			ra_rb(a, 1);
	}
}