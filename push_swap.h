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
	int				index;
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
t_list	*create_node(int value, int index);
void 	print_list(t_list *head);
t_list	*array_to_list(int *arr, int size);


//operations
void	sa_sb(t_list **list, int i);
void	ss(t_list **a_list, t_list **b_list);
void	pa(t_list **list_a, t_list **list_b);
void	pb(t_list **list_a, t_list **list_b);
void	ra_rb(t_list **list, int i);
void	rr(t_list **a_list, t_list **b_list);
void	rra_rrb(t_list **list, int i);
void	rrr(t_list **a_list, t_list **b_list);

#endif
