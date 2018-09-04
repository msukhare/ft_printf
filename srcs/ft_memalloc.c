/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msukhare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 09:45:24 by msukhare          #+#    #+#             */
/*   Updated: 2017/12/25 13:29:43 by msukhare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

#include "../include/ft_printf.h"

#include <stdlib.h>

void				*ft_memalloc(size_t size)
{
	void			*p_mem;

	if ((p_mem = malloc(size)) == NULL)
		return (NULL);
	ft_bzero(p_mem, size);
	return (p_mem);
}
