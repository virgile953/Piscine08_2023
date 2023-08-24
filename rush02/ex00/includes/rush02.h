/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbarbera <vbarbera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 15:12:25 by vbarbera          #+#    #+#             */
/*   Updated: 2023/08/20 23:36:30 by vbarbera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH02_H
# define RUSH02_H
# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

# define INT_MAX 2147483647

typedef struct t_dict_line
{
	int				size_num;
	char			*number;
	char			*letters;
}					t_dict_line;

int					open_dict(char *dict_name);
int					ft_atoi(char *str);
void				ft_putstr(char *str);
int					ft_strlen(char *str);
void				ft_swap(int *a, int *b);
char				*ft_strndup(char *str, int index, int n);
char				**ft_split(char *str, char *charset);
t_dict_line			*ft_read_dict(int dict_id, char *dict_name);
int					ft_get_dict_len(char *dict_name);
char				*get_dict_name(int argc, char **argv);
int					ft_count_word(char *str, char *charset);
char				*ft_strjoin(int size, char **strs, char *sep);
int					count_stuff(char **tab);
struct t_dict_line	*ft_strs_to_tab(int count, char **tab);
void				ft_show_tab(struct t_dict_line *par);
void				ft_putnbr(int nb);
void				ft_putchar(char c);
void				ft_convert(char *nbr, struct t_dict_line *tab,
						char *magnitude, int i);
char				*ft_strcat(char *dest, char *src);
void				ft_findvalue(char *key, struct t_dict_line *tab);
int					ft_strcmp(char *s1, char *s2);

#endif
