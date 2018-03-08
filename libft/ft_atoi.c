/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehouzard <ehouzard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/15 19:04:05 by ehouzard          #+#    #+#             */
/*   Updated: 2017/11/17 17:36:33 by ehouzard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#define SPACE *str == '\n' || *str == '\t' || *str == '\v'
#define SPACE2 *str == '\f' || *str == '\r' || *str == ' '

int		ft_atoi(const char *str)
{
	int integer;
	int neg;

	integer = 0;
	neg = 1;
	while (SPACE || SPACE2)
		str++;
	if (*str == '-' && *(str + 1) >= '0' && *(str + 1) <= '9')
	{
		neg = -1;
		str++;
	}
	if (*str == '+')
	{
		if (*(str + 1) >= '0' && *(str + 1) <= '9')
			str++;
		else
			return (0);
	}
	while (*str >= '0' && *str <= '9')
	{
		integer = (((integer * 10) + *str) - 48);
		str++;
	}
	return (integer * neg);
}
