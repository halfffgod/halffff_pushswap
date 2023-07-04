/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbadalia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 16:26:12 by nbadalia          #+#    #+#             */
/*   Updated: 2023/07/02 17:26:28 by nbadalia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

typedef struct s_list
{
	int				data;
	struct s_list	*next;
}	t_list;

//libft functions
char	**ft_split(char const *s, char c);
char	*ft_strjoin(char const *s1, char const *s2);
size_t	ft_strlen(const char *str);
int		ft_atoi(const	char *str);
char	*ft_substr(const char *s, unsigned int start, size_t len);

//utils
void	errors(void);
void	check(char *str);
int		*charp_to_int(char **h);
int		gh_len(char **gh);
void	check_sorting(int *igh, int l);
void	check_doubles(int *igh, int l);

//operations
void	sa_nd_sb(t_list **list, int i);
void	ss(t_list **a_list, t_list **b_list);
void	pa(t_list **list_a, t_list **list_b);
void	pb(t_list **list_a, t_list **list_b);
void	ra_nd_rb(t_list **list, int i);
void	rr(t_list **a_list, t_list **b_list);
void	rra_nd_rrb(t_list **list, int i);
void	rrr(t_list **a_list, t_list **b_list);

//let's try
void	push(t_list **head, int value);
void	free_list(t_list *head);
void	print_list(t_list *head);

#endif
