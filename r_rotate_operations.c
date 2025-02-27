/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   r_rotate_operations.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brbaazi <brbaazi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 12:10:50 by brbaazi           #+#    #+#             */
/*   Updated: 2025/02/17 15:40:49 by brbaazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_num **stack_a)
{
	t_num	*tmp;
	t_num	*tmp2;

	tmp = (*stack_a);
	tmp2 = (*stack_a);
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = (*stack_a);
	while (tmp2->next != tmp)
		tmp2 = tmp2->next;
	tmp2->next = NULL;
	*stack_a = tmp;
	write(1, "rra\n", 4);
}

void	rrb(t_num **stack_b)
{
	t_num	*tmp;
	t_num	*tmp2;

	tmp = (*stack_b);
	tmp2 = (*stack_b);
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = (*stack_b);
	while (tmp2->next != tmp)
		tmp2 = tmp2->next;
	tmp2->next = NULL;
	*stack_b = tmp;
	write(1, "rrb\n", 4);
}

void	rrr(t_num **stack_a, t_num **stack_b)
{
	rra(stack_a);
	rrb(stack_b);
	write(1, "rrr\n", 4);
}
