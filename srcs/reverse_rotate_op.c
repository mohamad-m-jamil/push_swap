/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate_op.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjamil <mjamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 16:29:12 by mjamil            #+#    #+#             */
/*   Updated: 2024/07/29 11:30:22 by mjamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	reverse_rotate(t_stack_node **stack)
{
	t_stack_node	*prev ;
	t_stack_node	*current;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		return ;
	}
	prev = NULL;
	current = *stack;
	while (current->next != NULL)
	{
		prev = current;
		current = current->next;
	}
	current->next = *stack;
	prev->next = NULL;
	*stack = current;
}

void	rra(t_stack_node **a, bool print)
{
	reverse_rotate(a);
	if (!print)
		ft_printf("rra\n");
}

void	rrb(t_stack_node **b, bool print)
{
	reverse_rotate(b);
	if (!print)
		ft_printf("rrb\n");
}

void	rrr(t_stack_node **a, t_stack_node **b, bool print)
{
	reverse_rotate(a);
	reverse_rotate(b);
	if (!print)
		ft_printf("rrr\n");
}
