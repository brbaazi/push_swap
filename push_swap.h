/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brbaazi <brbaazi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 12:10:50 by brbaazi           #+#    #+#             */
/*   Updated: 2025/02/14 14:26:53 by brbaazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_num
{
	int				content;
	int				index;
	int				position;
	struct s_num	*next;
}					t_num;
char				*ft_substr(const char *s, unsigned int start, size_t len);
void				set_positions(t_num **stack, int lstsize);
int					is_stack_sorted(t_num *stack);
void				parsing(int argc, char **argv, t_num **stack_a,
						int *lstsize);
int					are_args_valid(int argc, char **argv);
char				**ft_split(const char *s, char c);
long				ft_atoi(const char *str);
size_t				ft_strlen(const char *s);
char				*ft_strdup(const char *s1);
void				sort_two(t_num **stack_a);
void				sort_three(t_num **stack_a);
void				sort_four(t_num **stack_a, t_num **stack_b, int lstsize);
void				sort_five(t_num **stack_a, t_num **stack_b, int lstsize);
void				sort_short_stack(t_num **stack_a, t_num **stack_b,
						int lstsize);
t_num				*find_min(t_num *stack);
void				extract_min(t_num **stack_a, int lstsize);
t_num				new_num(int content);
void				add_node(int content, t_num **stack_a);
int					index_stack(t_num *stack);
void				ft_free_array(char **array);
void				ft_free_list(t_num *lst);
void				ft_exit(t_num *lst, char **array);
void				sa(t_num **lst);
void				sb(t_num **lst);
void				ss(t_num **stack_a, t_num **stack_b);
void				pb(t_num **stack_a, t_num **stack_b);
void				pa(t_num **stack_a, t_num **stack_b);
void				ra(t_num **stack_a);
void				rb(t_num **stack_b);
void				rr(t_num **stack_a, t_num **stack_b);
void				rra(t_num **stack_a);
void				rrb(t_num **stack_b);
void				rrr(t_num **stack_a, t_num **stack_b);
void				ft_exit(t_num *lst, char **array);
#endif
