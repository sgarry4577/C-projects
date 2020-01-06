/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarry <sgarry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 19:11:01 by sgarry            #+#    #+#             */
/*   Updated: 2019/07/25 16:19:36 by sgarry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdio.h>
# include <string.h>
# include <stdlib.h>
# include <wchar.h>
# include <stdarg.h>

typedef struct		s_flags{
	int			end;
	char		*out;
	int			count;
}					t_flags;

typedef struct		s_prms{
	char		c;
	int			l;
	char		*f;
	int			wd;
	int			ac;
	int			zero;
	int			space;
	int			box;
	int			plus;
	int			minus;
	int			dot;
	int			valid;
	int			type;
	int			empty;
}					t_prms;

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

void				*ft_memmove(void *dst, const void *src, size_t len);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
void				*ft_memchr(const void *s, int c, size_t n);
size_t				ft_strlen(const char *s);
char				*ft_strdup(const char *s1);
char				*ft_strcpy(char *dst, const char *src);
char				*ft_strncpy(char *dst, const char *src, size_t len);
char				*ft_strcat(char *restrict s1, const char *restrict s2);
void				*ft_memset(void *b, int c, size_t len);
void				ft_bzero(void *s, size_t n);
void				*ft_memcpy(void *dst, const void *src, size_t n);
void				*ft_memccpy(void *dst, const void *src, int c, size_t n);
void				*ft_memalloc(size_t size);
void				ft_memdel(void **ap);
char				*ft_strnew(size_t size);
void				ft_strdel(char **as);
void				ft_strclr(char *s);
void				ft_striteri(char *s, void (*f)(unsigned int, char*));
void				ft_striter(char *s, void (*f)(char*));
char				*ft_strmap(char const *s, char (*f)(char));
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int					ft_strequ(char const *s1, char const *s2);
int					ft_strnequ(char const *s1, char const *s2, size_t n);
char				*ft_strsub(char const *s, unsigned int start, size_t len);
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strtrim(char const *s);
void				ft_putchar(char c);
int					ft_putstr(char const *s);
void				ft_putchar_fd(char c, int fd);
void				ft_putstr_fd(char const *s, int fd);
void				ft_putendl(char const *s);
void				ft_putendl_fd(char const *s, int fd);
void				ft_putnbr(int n);
void				ft_putnbr_fd(int n, int fd);
char				*ft_itoa(int n);
char				**ft_strsplit(char const *s, char c);
char				*ft_strncat(char *s1, const char *s, size_t n);
size_t				ft_strlcat(char *dst, const char *src, size_t size);
char				*ft_strchr(const char *s, int c);
char				*ft_strrchr(const char *s, int c);
char				*ft_strstr(const char *haystack, const char *needle);
char				*ft_strnstr(const char *hay, const char *nee, size_t len);
int					ft_strcmp(const char *s1, const char *s2);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
int					ft_atoi(const char *str);
int					ft_isalpha(int c);
int					ft_isdigit(int c);
int					ft_isalnum(int c);
int					ft_isascii(int c);
int					ft_isprint(int c);
int					ft_toupper(int c);
int					ft_toupper(int c);
int					ft_tolower(int c);
char				*ft_strnew(size_t size);
void				ft_strdel(char **as);
t_list				*ft_lstnew(void const *content, size_t content_size);
void				ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
void				ft_lstdel(t_list **alst, void (*del)(void*, size_t));
void				ft_lstadd(t_list **alst, t_list *new);
void				ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list				*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));

char				*ft_sswap(char *str);
int					ft_sstrlen(int n);
int					ft_clon(char const *str, char c, int i);
char				*ft_chacc(int g);
int					ft_list_size(t_list *begin_list);
t_list				*ft_list_last(t_list *begin_list);
char				*ft_width(int i, char *str);
char				*ft_flag_e(long double i, int index, int big);
char				*ft_flag_f(long double i, int index, int big);
char				*ft_flag_o(unsigned long long i, int f);
char				*ft_flag_u(unsigned long long i);
char				*ft_flag_p(void *srr, int ac);
char				*ft_flag_x(unsigned long long i, int a, int f, int r);
char				*ft_flag_g(long double f, int index, int big);
char				*ft_flag_i(long long int i, int index);
char				*ft_zero(int i, char *str);
char				*ft_i_5(char *s, int f);
void				ft_flag_e_1(char *str, int a, int f);
void				ft_flag_e_3(char *str, int flag, int a);
char				*ft_proverka(long double i, int big);
char				*ft_str(char *str, int f);
char				*ft_sswap(char *str);
char				*ft_flag_f_1(int a, char *str, int flag);
int					ft_flag_f_0(char *str, long double i, int a, int index);
char				ft_abcd(unsigned long long i, int g);
char				*ft_minus(int i, char *str);
char				*ft_flag_g_end_free(char *str, char *str1);
char				*colors_apply(char *str);
int					flag_check1(t_prms *p);
char				*re_gr(char *r, char c);
char				*ft_space(char *r);
char				*ft_plus(char *r);
char				*ft_uitoa(unsigned long long n);
char				*ft_litoa(long long n);
int					lint_len(long long c);
int					printf_one(t_prms *p, va_list factor);
void				todo(t_prms *p, va_list factor);
int					get_ac(t_prms *p, va_list factor);
int					get_wd(t_prms *p, va_list factor);
char				*mod_apply(t_prms *p, char *r);
int					flag_checker(t_prms *p);
char				*pool(t_prms *p, va_list factor);
char				*redirect_float(t_prms *p, va_list factor);
char				*redirect_char(t_prms *p, va_list factor);
char				*redirect_str(va_list factor);
char				*redirect_prc(void);
char				*redirect_int(t_prms *p, va_list factor);
long long			get_int(t_prms *p, va_list factor);
unsigned long long	get_uint(t_prms *p, va_list factor);
long double			get_double(t_prms *p, va_list factor);
char				*redirect_other(t_prms *p, va_list factor);
char				*ft_strreplchar(char *str, char c, char k);
char				*ft_strjoinre(char const *s1, char const *s2);
int					int_len(int c);
char				*ft_strreplchar(char *str, char c, char k);
char				*ft_strjoinre(char const *s1, char const *s2);
int					int_len(int c);
int					ft_strsearch(char const *str, char c);
char				*ft_strrejoinre(char const *s1, char const *s2);
char				*ft_strrejoin(char const *s1, char const *s2);
char				*ft_printf_plus(char *n);
char				*ft_printf_space(char *n);
char				*ft_printf_zero_int(char *s, int n);
size_t				ft_strclen(char const *str, char c);
char				*ft_flags_start(char *str);
int					ft_printf(const char *str, ...);
#endif
