/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehouzard <ehouzard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 18:36:34 by ehouzard          #+#    #+#             */
/*   Updated: 2018/01/04 17:48:26 by ehouzard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t idx;

	idx = 0;
	while (src[idx] && idx < len)
	{
		dst[idx] = src[idx];
		idx++;
	}
	while (idx < len)
		dst[idx++] = '\0';
	return (dst);
}
