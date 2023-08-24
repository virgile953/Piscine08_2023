/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_parser.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbarbera <vbarbera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 13:55:12 by vbarbera          #+#    #+#             */
/*   Updated: 2023/08/24 20:33:15 by vbarbera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

int	is_sign(char *str)
{
	if (ft_strlen(str) != 1)
		return (0);
	if (str[0] == '+')
		return (1);
	if (str[0] == '-')
		return (1);
	if (str[0] == '/')
		return (1);
	if (str[0] == '%')
		return (1);
	if (str[0] == '*')
		return (1);
	return (0);
}

// void	parse_inputs(int ac, char **av, t_parsed *ret)
// {
// 	if (ac != 4)
// 		ft_set_struct(ret, "", 1);
// 	if (!is_sign(av[2]) && !ret->is_error)
// 		ft_set_struct(ret, "0\n", 2);
// 	if (ft_atoi(av[3]) == 0 && av[2][0] == '/' && !ret->is_error)
// 		ft_set_struct(ret, DIV_0, 3);
// 	if (ft_atoi(av[3]) == 0 && av[2][0] == '%' && !ret->is_error)
// 		ft_set_struct(ret, MOD_0, 3);
// 	if (ret->is_error != 0)
// 		return ;
// 	set_op(av[2][0], ret);
// 	ret->l_int = ft_atoi(av[1]);
// 	ret->r_int = ft_atoi(av[3]);
// }

void	parse_inputs(int ac, char **av, t_parsed *ret)
{
	if (ac != 4)
		ret->is_error = 1;
	if (!is_sign(av[2]) && !ret->is_error)
	{
		write(1, "0\n", 2);
		ret->is_error = 1;
	}
	if (ft_atoi(av[3]) == 0 && av[2][0] == '/' && !ret->is_error)
	{
		ft_putstr("Stop : division by zero\n");
		ret->is_error = 1;
	}
	if (ft_atoi(av[3]) == 0 && av[2][0] == '%' && !ret->is_error)
	{
		ft_putstr("Stop : modulo by zero\n");
		ret->is_error = 1;
	}
	if (ret->is_error != 0)
		return ;
	set_op(av[2][0], ret);
	ret->l_int = ft_atoi(av[1]);
	ret->r_int = ft_atoi(av[3]);
}

void	set_op(char op, t_parsed *struc)
{
	if (op == '/')
		struc->op = &ft_div;
	if (op == '*')
		struc->op = &ft_multiply;
	if (op == '%')
		struc->op = &ft_mod;
	if (op == '+')
		struc->op = &ft_add;
	if (op == '-')
		struc->op = &ft_subst;
}

/* void	ft_set_struct(t_parsed *struc, char *value, int errornum)
{
	char	*tmp;

	struc->error_msg = malloc((ft_strlen(value) + 1) * sizeof(char));
	if (!struc->error_msg)
		return ;
	tmp = struc->error_msg;
	while (*value)
	{
		*tmp = *value;
		tmp++;
		value++;
	}
	struc->errornum = errornum;
	struc->is_error = 1;
	*tmp = '\0';
}
 */