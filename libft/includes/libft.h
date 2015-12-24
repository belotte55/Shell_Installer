/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Belotte <fbellott@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 16:32:46 by Belotte           #+#    #+#             */
/*   Updated: 2015/12/20 14:58:39 by fbellott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <string.h>

# define INPUT		0
# define OUTPUT		1
# define ERR		2

# define TRUE		1
# define FALSE		0

# define RED		31
# define GREEN		32
# define YELLOW		33
# define BLUE		34
# define MAGENTA	35
# define CYAN		36
# define RESET		0

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

typedef struct		s_point
{
	int				x;
	int				y;
}					t_point;

typedef struct		s_size
{
	int				width;
	int				height;
}					t_size;

/*
** PART I
*/
void				*ft_memset(void *str, int c, size_t len);
void				ft_bzero(void *str, size_t len);
void				*ft_memcpy(void *dest, const void *src, size_t len);
void				*ft_memccpy(void *dest, const void *src, int c, size_t n);
void				*ft_memmove(void *dest, const void *src, size_t len);
void				*ft_memchr(const void *str, int c, size_t len);
int					ft_memcmp(const void *s1, const void *s2, size_t len);
size_t				ft_strlen(char *str);
char				*ft_strdup(char *str);
char				*ft_strcpy(char *dest, const char *src);
char				*ft_strncpy(char *dest, const char *src, size_t len);
char				*ft_strcat(char *dest, const char *src);
char				*ft_strncat(char *dest, const char *src, size_t len);
size_t				ft_strlcat(char *dest, const char *src, size_t len);
char				*ft_strchr(const char *str, int c);
char				*ft_strrchr(const char *str, int c);
char				*ft_strstr(const char *str1, const char *str2);
char				*ft_strnstr(const char *s1, const char *s2, size_t len);
int					ft_strcmp(const char *str1, const char *str2);
int					ft_strncmp(const char *str1, const char *str2, size_t len);
int					ft_atoi(const char *str);
int					ft_isalpha(int c);
int					ft_isdigit(int c);
int					ft_isalnum(int c);
int					ft_isascii(int c);
int					ft_isprint(int c);
int					ft_toupper(int c);
int					ft_tolower(int c);

/*
** PART II
*/
void				*ft_memalloc(size_t len);
void				ft_memdel(void **str);
char				*ft_strnew(size_t len);
void				ft_strdel(char	**str);
void				ft_strclr(char *str);
void				ft_striter(char *str, void (*f)(char *));
void				ft_striteri(char *str, void (*f)(unsigned int, char *));
char				*ft_strmap(char const *str, char (*f)(char));
char				*ft_strmapi(char const *str, char (*f)(unsigned int, char));
int					ft_strequ(char const *str1, char const *str2);
int					ft_strnequ(char const *str1, char const *str2, size_t len);
char				*ft_strsub(char const *str, unsigned int start, size_t len);
char				*ft_strjoin(char const *str1, char const *str2);
char				*ft_strtrim(char const *str);
char				**ft_strsplit(char const *str, char c);
char				*ft_itoa(int n);
void				ft_putchar(char c);
void				ft_putstr(char const *str);
void				ft_putendl(char const *str);
void				ft_putnbr(int n);
void				ft_putchar_fd(char c, int fd);
void				ft_putstr_fd(char const *str, int fd);
void				ft_putendl_fd(char const *str, int fd);
void				ft_putnbr_fd(int n, int fd);

/*
** PART III
*/
t_list				*ft_lstnew(void const *content, size_t content_size);
void				ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
void				ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void				ft_lstadd(t_list **alise, t_list *new);
void				ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list				*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));

/*
** MY FUNCTIONS
*/
char				*ft_strrev(char *str);
void				ft_ln(void);
int					ft_getabs(int n);
char				*ft_strreduce(const char *str, char c);
char				*ft_strrmc(const char *str, char c);
char				*ft_strtrim_c(const char *str, char c);
int					ft_assign_var(int *a, int *b, int val_a, int val_b);
int					ft_init_var(int *a, int *b);
char				*ft_strndup(char *str, int n);
char				*ft_insert_at(const char *str, const char *substr, int pos);
char				*ft_erase_to(const char *s, const char *subs, int pos);
char				*ft_strrmc(const char *s, char c);
t_point				*ft_point(int x, int y);
t_size				*ft_size(int width, int height);
int					ft_fact(unsigned int n);
int					ft_pow(int n, int exp);
char				ft_is_char_in(const char *s, char c);
int					ft_pos_of_first_c(const char *s, char c);
int					ft_sqrt(int n);
void				ft_display_grid(char **grid);
void				ft_putstr_color(char *s, int color);

#endif
