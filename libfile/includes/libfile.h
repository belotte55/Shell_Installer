/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libfile.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbellott <fbellott@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 12:35:21 by fbellott          #+#    #+#             */
/*   Updated: 2015/12/24 12:20:03 by fbellott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFILE_H
# define LIBFILE_H

# include <fcntl.h>
# include <sys/types.h>
# include "libft.h"
# include <stdio.h>

# define R			O_RDONLY
# define W			O_WRONLY
# define RW			O_RDWR
# define T			O_TRUNC

# define BUF_SIZE	50

typedef struct		s_file
{
	char			*name;
	int				fd;
	int				access;
	char			*data;
	char			*tmp;
	char			**lines;
	int				pos;
	int				len;
	int				nb_of_lines;

	char			*(*read) (struct s_file **file, char protect);
	char			(*close) (struct s_file *file);
	char			(*move_to) (struct s_file *file, int pos);
	char			(*move_by) (struct s_file *file, int pos);
	char			*(*getnc) (struct s_file *file, int n);
	char			(*insert) (struct s_file *file, char *str);
	char			(*insert_at) (struct s_file *file, char *str, int pos);
	char			(*write) (struct s_file *file);
	char			(*clear) (struct s_file *file);
}					t_file;

t_file				*ft_open(char *name, int access);
t_file				*ft_open_fd(int fd);
char				*ft_file_read(t_file **file, char protect);
char				ft_file_close(t_file *file);
char				ft_file_move_to(t_file *file, int pos);
char				ft_file_move_by(t_file *file, int pos);
char				*ft_file_getnc(t_file *file, int n);
char				ft_file_insert(t_file *file, char *str);
char				ft_file_insert_at(t_file *file, char *str, int pos);
char				ft_file_write(t_file *file);
char				ft_file_clear(t_file *file);
char				ft_free_file(t_file **f);

#endif
