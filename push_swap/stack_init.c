/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isrguerr <isrguerr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 16:01:32 by isrguerr          #+#    #+#             */
/*   Updated: 2024/12/17 16:20:47 by isrguerr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "push_swap.h"

void *stack_init(stack_node **a, char **argv)
{
    int i;

    i = 0;
    while(argv[i])
    {
        check_value(argv[i]);
    }
}
