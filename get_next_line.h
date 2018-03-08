/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehouzard <ehouzard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/06 16:04:29 by ehouzard          #+#    #+#             */
/*   Updated: 2018/01/09 13:12:45 by ehouzard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <sys/types.h>
# include <sys/stat.h>
# include <limits.h>
# include <fcntl.h>
# include "libft.h"

# define BUFF_SIZE 42

int					get_next_line(const int fd, char **line);
char				*ft_read_n_stock(int fd, char *stock);

#endif
