/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_file_read.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Belotte <fbellott@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 18:08:15 by Belotte           #+#    #+#             */
/*   Updated: 2015/12/24 12:52:35 by fbellott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfile.h"

char		*ft_file_read(t_file **f, char protect)
{
	int		bytes;
	char	*data;
	char	*buf;
	char	*buf_;

	if (!(buf = (char *)malloc(sizeof(char) * (BUF_SIZE + 1))) || !*f ||
		!(data = (char *)malloc(sizeof(char) * 1)) ||
		!((*f)->access == R || (*f)->access == RW))
		return (NULL);
	while ((bytes = read((*f)->fd, buf, BUF_SIZE)) > 0)
	{
		buf[bytes] = '\0';
		buf_ = ft_strdup(data);
		free(data);
		data = ft_insert_at(buf_, buf, (*f)->len);
		free(buf_);
		(*f)->len += bytes;
		if (protect && buf[bytes - 1] < 0)
			return (NULL);
	}
	if (buf)
		free(buf);
	if (!data)
		return (NULL);
	(*f)->data = ft_strdup(data);
	(*f)->tmp = ft_strdup(data);
	ft_putstr((*f)->tmp);
	/*int		i = -1;
	while ((*f)->lines[++i])
		free((*f)->lines[i]);
	free((*f)->lines);
	*/(*f)->lines = ft_strsplit(data, '\n');
	free(data);
	//free((*f)->tmp);
	while ((*f)->lines[++(*f)->nb_of_lines])
		;
	return ((*f)->data);
}
