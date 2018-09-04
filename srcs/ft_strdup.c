/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msukhare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 08:31:36 by msukhare          #+#    #+#             */
/*   Updated: 2017/12/25 14:14:13 by msukhare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

char		*ft_strdup(const char *s1)
{
	char	*new_char;
	int		i;

	i = 0;
	if (!(new_char = (char *)malloc(sizeof(char) * (ft_strlen(s1) + 1))))
		return (NULL);
	while (s1[i])
	{
		new_char[i] = s1[i];
		i++;
	}
	new_char[i] = '\0';
	return (new_char);
}
