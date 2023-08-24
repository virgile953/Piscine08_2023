/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbarbera <vbarbera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 13:33:32 by vbarbera          #+#    #+#             */
/*   Updated: 2023/08/24 20:25:32 by vbarbera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIB_H
# define LIB_H
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

# define DIV_0 "Stop : division by zero\n"
# define MOD_0 "Stop : modulo by zero\n"

typedef struct s_parsedinput
{
	int		l_int;
	int		r_int;
	int		(*op)(int, int);
	int		result;
	int		is_error;
	int		errornum;
}			t_parsed;

int			ft_multiply(int a, int b);
int			ft_add(int a, int b);
int			ft_subst(int a, int b);
int			ft_mod(int a, int b);
int			ft_div(int a, int b);
void		parse_inputs(int ac, char **av, t_parsed *ret);
int			ft_atoi(char *str);
int			is_sign(char *str);
void		ft_swap(int *a, int *b);
int			ft_strlen(char *str);
int			ft_strcmp(char *s1, char *s2);
void		ft_putstr(char *str);
void		ft_putchar(char c);
void		ft_putnbr(int nb);
void		do_op(t_parsed *struc);
void		set_op(char op, t_parsed *struc);

#endif
