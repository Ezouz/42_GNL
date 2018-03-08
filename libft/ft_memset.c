/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehouzard <ehouzard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 13:43:16 by ehouzard          #+#    #+#             */
/*   Updated: 2017/11/17 13:02:20 by ehouzard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			cmp;
	unsigned char	*str;

	str = (unsigned char*)b;
	cmp = 0;
	while (cmp < len)
	{
		str[cmp] = c;
		cmp++;
	}
	return (b);
}
