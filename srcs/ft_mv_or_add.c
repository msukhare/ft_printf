/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mv_or_add.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msukhare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/25 15:14:21 by msukhare          #+#    #+#             */
/*   Updated: 2017/12/25 17:00:01 by msukhare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

void		ft_mvdiez(char *str, int field)
{
	int		i;

	i = 1;
	str[i++] = 'x';
	while (str[i] && i < field)
	{
		if (str[i] == 'x')
			str[i] = '0';
		i++;
	}
}

char		*ft_addspace(char *p_var)
{
	char	*to_free;

	if (p_var[0] == '-' || p_var[0] == '+')
		return (p_var);
	to_free = p_var;
	if (!(p_var = ft_strjoin(" ", p_var)))
		return (NULL);
	free(to_free);
	return (p_var);
}

char		*ft_addsigne(char *str)
{
	char	*signedint;

	if (str[0] == '+' || str[0] == '-')
		return (str);
	if (!(signedint = ft_strjoin("+", str)))
		return (NULL);
	free(str);
	return (signedint);
}

void		ft_movesigne(char *new_pvar)
{
	int		i;
	char	temp;

	i = 0;
	while (new_pvar[i] && new_pvar[i] != '-' && new_pvar[i] != '+')
		i++;
	if (new_pvar[i] == '+' || new_pvar[i] == '-')
	{
		temp = new_pvar[i];
		new_pvar[i] = '0';
		new_pvar[0] = temp;
	}
}
