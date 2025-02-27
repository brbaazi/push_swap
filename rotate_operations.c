/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_operations.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brbaazi <brbaazi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 12:10:50 by brbaazi           #+#    #+#             */
/*   Updated: 2025/02/15 14:11:57 by brbaazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_num **stack_a)
{
	t_num	*tmp;
	t_num	*tmp2;

	if ((*stack_a)->next == NULL)
		return ;
	tmp = (*stack_a);
	*stack_a = (*stack_a)->next;
	tmp2 = (*stack_a);
	while (tmp2->next)
		tmp2 = tmp2->next;
	tmp2->next = tmp;
	tmp->next = NULL;
	write(1, "ra\n", 3);
}

void	rb(t_num **stack_b)
{
	t_num	*tmp;
	t_num	*tmp2;

	if ((*stack_b)->next == NULL)
		return ;
	tmp = (*stack_b);
	*stack_b = (*stack_b)->next;
	tmp2 = (*stack_b);
	while (tmp2->next)
		tmp2 = tmp2->next;
	tmp2->next = tmp;
	tmp->next = NULL;
	write(1, "rb\n", 3);
}

void	rr(t_num **stack_a, t_num **stack_b)
{
	ra(stack_a);
	rb(stack_b);
	write(1, "rr\n", 3);
}
