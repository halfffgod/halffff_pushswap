/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bonus.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbadalia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 12:44:30 by nbadalia          #+#    #+#             */
/*   Updated: 2023/07/16 12:44:53 by nbadalia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BONUS_H
# define BONUS_H

# include "push_swap.h"
# include "get_next_line.h"

int		ft_strcmp(char *s1, char *s2);
int		check_sort(t_list *a);
void	check_argv(char **str);
void	errors_b(void);
void	sa_sb_b(t_list **list);
void	ss_b(t_list **a_list, t_list **b_list);
void	pa_b(t_list **list_a, t_list **list_b);
void	pb_b(t_list **list_a, t_list **list_b);
void	ra_rb_b(t_list **list);
void	rr_b(t_list **a_list, t_list **b_list);
void	rra_rrb_b(t_list **list);
void	rrr_b(t_list **a_list, t_list **b_list);

#endif
