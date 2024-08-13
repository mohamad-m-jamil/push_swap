/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjamil <mjamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 16:29:07 by mjamil            #+#    #+#             */
/*   Updated: 2024/07/29 11:30:19 by mjamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

static void	free_split(char **split)
{
	int	i;

	i = 0;
	while (split[i])
	{
		free(split[i]);
		i++;
	}
	free(split);
}

static char	**parse_arguments(int argc, char **argv)
{
	if (argc == 2)
		return (ft_split(argv[1], ' '));
	return (argv + 1);
}

int	main(int argc, char **argv)
{
	t_stack_node	*a;
	t_stack_node	*b;
	char			**var;
	int				len;

	a = NULL;
	b = NULL;
	if (argc == 1 || (argc == 2 && !argv[1][0]))
		return (1);
	var = parse_arguments(argc, argv);
	init_stack_a(&a, var, argc);
	if (!stack_sorted(a))
	{
		len = stack_len(a);
		if (len == 2)
			sa(&a, false);
		else if (len == 3)
			sort_three(&a);
		else
			sort_stacks(&a, &b);
	}
	free_stack(&a);
	if (argc == 2)
		free_split(var);
	return (0);
}
