/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_op_tab.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/04 16:14:27 by baalbane          #+#    #+#             */
/*   Updated: 2017/04/18 19:24:24 by baalbane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/asm.h"

t_op	*get_op_tab(void)
{
	t_op	*start;

	start = malloc(sizeof(t_op));
	start->name = ft_strdup("live");
	start->args_number = 1;
	start->args_type[0] = 2;
	start->op_code = 1;
	start->cycle_number = 10;
	start->description = ft_strdup("alive");
	start->octet_codage = 0;
	start->label_size = 0;
	start->next = get_ld();
	return (start);
}

t_op	*get_ld(void)
{
	t_op	*new;

	new = malloc(sizeof(t_op));
	new->name = ft_strdup("ld");
	new->args_number = 2;
	new->args_type[0] = 6;
	new->args_type[1] = 5;
	new->op_code = 2;
	new->cycle_number = 5;
	new->description = ft_strdup("load");
	new->octet_codage = 1;
	new->label_size = 0;
	new->next = get_st();
	return (new);
}

t_op	*get_st(void)
{
	t_op	*new;

	new = malloc(sizeof(t_op));
	new->name = ft_strdup("st");
	new->args_number = 2;
	new->args_type[0] = 5;
	new->args_type[1] = 15;
	new->op_code = 3;
	new->cycle_number = 5;
	new->description = ft_strdup("store");
	new->octet_codage = 1;
	new->label_size = 0;
	new->next = get_add();
	return (new);
}

t_op	*get_add(void)
{
	t_op	*new;

	new = malloc(sizeof(t_op));
	new->name = ft_strdup("add");
	new->args_number = 3;
	new->args_type[0] = 5;
	new->args_type[1] = 5;
	new->args_type[2] = 5;
	new->op_code = 4;
	new->cycle_number = 10;
	new->description = ft_strdup("addition");
	new->octet_codage = 1;
	new->label_size = 0;
	new->next = get_sub();
	return (new);
}

t_op	*get_sub(void)
{
	t_op	*new;

	new = malloc(sizeof(t_op));
	new->name = ft_strdup("sub");
	new->args_number = 3;
	new->args_type[0] = 5;
	new->args_type[1] = 5;
	new->args_type[2] = 5;
	new->op_code = 5;
	new->cycle_number = 10;
	new->description = ft_strdup("soustraction");
	new->octet_codage = 1;
	new->label_size = 0;
	new->next = get_and();
	return (new);
}
