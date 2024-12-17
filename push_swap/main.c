
#include "push_swap.h"

int	main(int argc, char **argv)
{
    stack_node *a;
    stack_node *b;

    a = NULL;
    b = NULL;

	if (argc == 1)
		return (1);
	else if (argc == 2)
		argv = ft_split(argv[1], ' ');
    stack_init(&a, argv + 1);
    sort_stack(&a, &b);
    free_stack(&a);
    return (0);
}