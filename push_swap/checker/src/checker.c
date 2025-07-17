#include "../includes/checker.h"

int	main(int argc, char **argv)
{
	t_list	*list_a;
	t_list	*list_b;
	char	*op;

	if (argc < 2)
		return (0);
	list_a = parse_list(argc, argv);
	list_b = NULL;

	op = get_next_line(0, 0);
	while (op)
	{
		if (ft_strcmp(op, "sa\n") == 0)
			sa(&list_a);
		else if (ft_strcmp(op, "sb\n") == 0)
			sb(&list_b);
		else if (ft_strcmp(op, "ss\n") == 0)
		{
			sa(&list_a);
			sb(&list_b);
		}
		else if (ft_strcmp(op, "pa\n") == 0)
			pa(&list_a, &list_b);
		else if (ft_strcmp(op, "pb\n") == 0)
			pb(&list_a, &list_b);
		else if (ft_strcmp(op, "ra\n") == 0)
			ra(&list_a);
		else if (ft_strcmp(op, "rb\n") == 0)
			rb(&list_b);
		else if (ft_strcmp(op, "rr\n") == 0)
		{
			ra(&list_a);
			rb(&list_b);
		}
		else if (ft_strcmp(op, "rra\n") == 0)
			rra(&list_a);
		else if (ft_strcmp(op, "rrb\n") == 0)
			rrb(&list_b);
		else if (ft_strcmp(op, "rrr\n") == 0)
		{
			rra(&list_a);
			rrb(&list_b);
		}
		else
		{
			free(op);
			write(2, "Error\n", 6);
			exit(1);
		}
		free(op);
		op = get_next_line(0, 0);
	}

	if (is_sorted(list_a) && list_b == NULL)
		write(1, "OK\n", 3);
	else
		write(1, "KO\n", 3);

	free_stack(&list_a);
	free_stack(&list_b);
	return (0);
}
