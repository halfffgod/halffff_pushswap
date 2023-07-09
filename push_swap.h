/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbadalia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 16:26:12 by nbadalia          #+#    #+#             */
/*   Updated: 2023/07/07 14:48:43 by nbadalia         ###   ########.fr       */
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
	int				index;
	struct s_list	*next;
}	t_list;

//libft functions
char	**ft_split(char const *s, char c);
char	*ft_strjoin(char *s1, char *s2);
size_t	ft_strlen(const char *str);
int		ft_atoi(const	char *str);
char	*ft_substr(const char *s, unsigned int start, size_t len);
int		ft_lstsize(t_list *lst);

//utils
void	errors(void);
void	check(char *str);
int		*charp_to_int(char **h);
int		gh_len(char **gh);
void	check_sorting(int *igh, int l);
void	check_doubles(int *igh, int l);
t_list	*create_node(int value, int index);
void	print_list(t_list *head);
t_list	*array_to_list(int *arr, int size);
void	push_to_stack_a(t_list **a, t_list **b, int size);
void free_leaks(t_list *a);

//operations
void	sa_sb(t_list **list, int i);
void	ss(t_list **a_list, t_list **b_list);
void	pa(t_list **list_a, t_list **list_b);
void	pb(t_list **list_a, t_list **list_b);
void	ra_rb(t_list **list, int i);
void	rr(t_list **a_list, t_list **b_list);
void	rra_rrb(t_list **list, int i);
void	rrr(t_list **a_list, t_list **b_list);

//sorting
int		maximum(t_list **list);
void	index_list(t_list **list);
void	sort_two(t_list **a);
void	sort_three(t_list **a);
void	sort_four(t_list **a, t_list **b);
void	sort_five(t_list **a, t_list **b);
void	sorting(t_list **a, t_list **b, int size);
void	butterfly(t_list **a, t_list **b, int n);


#endif
