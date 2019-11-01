/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milmi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/26 00:21:12 by milmi             #+#    #+#             */
/*   Updated: 2019/10/30 23:29:04 by milmi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milmi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 22:50:54 by milmi             #+#    #+#             */
/*   Updated: 2019/10/26 00:20:09 by milmi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef LIBFT_H
#define LIBFT_H
#include <unistd.h>
#include <stdlib.h>
#define BUFF_SIZE 4096

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

char    		**ft_split(char const *s, char c);
void			ft_lstadd_back(t_list **alst, t_list *new);
t_list			*ft_lstnew(void *content);
t_list			*ft_lstlast(t_list *lst);
size_t			ft_strlen(const char *s);
size_t  		ft_strlcpy(char * dest, const char * src, size_t size);
char			*ft_strdup(const char *s1);
void    		*ft_calloc(size_t count, size_t size);
char    		*ft_substr(char const *s, unsigned int start, size_t len);
char 			*ft_itoa(int n);
char			*ft_strcpy(char *s1, const char *s2);
char			*ft_strncpy(char *s1, const char *s2, size_t n);
char			*ft_strcat(char *s1, const char *s2);
char			*ft_strncat(char *s1, const char *s2, size_t n);
size_t			ft_strlcat(char	*dst, const char *src, size_t size);
char			*ft_strchr(const char *s, int c);
char			*ft_strrchr(const char *s, int c);
char			*ft_strstr(const char *s1, const char *s2);
char			*ft_strnstr(const char *s1, const char *s2, size_t n);
int				ft_strcmp(const char *s1, const char *s2);
int				ft_strncmp(const char *s1, const char *s2, size_t n);
int				ft_atoi(const char *str);
int				ft_isalpha(int c);
int				ft_islower(int c);
int				ft_isupper(int c);
int				ft_isdigit(int c);
int				ft_isalnum(int c);
int				ft_isascii(int c);
int				ft_isprint(int c);
int				ft_isalnumstr(char *str);
int				ft_isdigitstr(char *str);
int				ft_toupper(int c);
int				ft_tolower(int c);
int				ft_lstsize(t_list *lst);
void			*ft_memset(void *b, int c, size_t len);
void			ft_bzero(void *s, size_t n);
void			*ft_memdup(const void *s, size_t n);
void			*ft_memcpy(void *s1, const void *s2, size_t n);
void			*ft_memccpy(void *s1, const void *s2, int c, size_t n);
void			*ft_memmove(void *s1, const void *s2, size_t n);
void			*ft_memchr(const void *s, int c, size_t n);
int				ft_memcmp(const void *s1, const void *s2, size_t n);
void			*ft_memalloc(size_t size);
void			ft_memdel(void **ap);
char			*ft_strnew(size_t size);
void			ft_strdel(char **as);
void			ft_strclr(char *s);
void			ft_striter(char *s, void (*f)(char*));
void			ft_striteri(char *s, void (*f)(unsigned int, char*));
char			*ft_strmap(char const *s, char (*f)(char));
char			*ft_strmapi(char const *s, char (*f)(unsigned in, char));
int				ft_strequ(char const *s1, char const *s2);
int				ft_strnequ(char const *s1, char const *s2, size_t n);
char			*ft_strsub(char const *s, unsigned int start, size_t len);
char			*ft_strjoin(char const *s1, char const *s2);
char			*ft_strjoinfree(char *s1, char *s2);
char    		*ft_strtrim(char const *s1, char const *set);
char			**ft_strsplit(char const *s, char *splitchars);
char			*ft_itoa(int n);
void			ft_putchar_fd(char c, int fd);
void			ft_putstr_fd(char *s, int fd);
void			ft_putendl_fd(char *s, int fd);
void			ft_putnbr_fd(int n, int fd);
void			ft_lstadd_front(t_list **alst, t_list *new);
int				get_next_line(int const fd, char **line);
double			ft_cos(double angle);
double			ft_sin(double angle);
double			ft_tan(double angle);
void			error_if(int boolean, char *error_message);
void			error_exit(char *error_message);
void			ft_strvdel(char ***strv);
int				ft_strvlen(char **strv);
int				ft_strvadd(char ***strv, char *s);
int				ft_printf(const char *format, ...);

#endif
