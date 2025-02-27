/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_operations.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brbaazi <brbaazi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 12:10:50 by brbaazi           #+#    #+#             */
/*   Updated: 2025/02/14 14:28:36 by brbaazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pb(t_num **stack_a, t_num **stack_b)
{
	t_num	*tmp;

	tmp = (*stack_a);
	*stack_a = (*stack_a)->next;
	tmp->next = (*stack_b);
	*stack_b = tmp;
	write(1, "pb\n", 3);
}

void	pa(t_num **stack_a, t_num **stack_b)
{
	t_num	*tmp;

	if (!stack_b || !*stack_b)
		return ;
	tmp = (*stack_b);
	*stack_b = (*stack_b)->next;
	tmp->next = (*stack_a);
	*stack_a = tmp;
	write(1, "pa\n", 3);
}

void	sa(t_num **lst)
{
	t_num	*first;
	t_num	*second;

	if (*lst != NULL && (*lst)->next != NULL)
	{
		first = *lst;
		second = first->next;
		first->next = second->next;
		second->next = first;
		*lst = second;
	}
	write(1, "sa\n", 3);
}

void	sb(t_num **lst)
{
	t_num	*first;
	t_num	*second;

	if (*lst != NULL && (*lst)->next != NULL)
	{
		first = *lst;
		second = first->next;
		first->next = second->next;
		second->next = first;
		*lst = second;
	}
	write(1, "sb\n", 3);
}

void	ss(t_num **stack_a, t_num **stack_b)
{
	sa(stack_a);
	sb(stack_b);
	write(1, "ss\n", 3);
}
