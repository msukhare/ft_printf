/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msukhare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 08:54:39 by msukhare          #+#    #+#             */
/*   Updated: 2017/12/26 14:31:10 by msukhare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FT_PRINTF_H
# define __FT_PRINTF_H
# include <stdlib.h>
# include <wchar.h>
# include <stdarg.h>
# include <string.h>
# include <unistd.h>
# define BUFF_SIZE 80

typedef struct	s_flag
{
	size_t		type;
	size_t		conv;
	size_t		minus;
	size_t		signe;
	size_t		diez;
	size_t		space;
	size_t		zero;
	int			min_nb;
	int			min_field;
	int			preci;
	size_t		field;
	size_t		pourcent;
	int			backzero;
	char		*p_var;
}				t_flag;
void			ft_to_upper(char *str);
char			*ft_addsigne(char *str);
size_t			ft_strlen(const char *s);
void			ft_bzero(void *s, size_t n);
int				ft_putinbuff(const char *str, int *i, int *j, char *buff);
int				ft_putinbuffvar(t_flag *flag, int *j, char *buff);
void			ft_checksigne(char *str, int *i, t_flag *flag);
void			ft_checkfield(char *str, int *i, t_flag *flag);
void			ft_checkconv(char *p_flag, int *i, t_flag *flag);
void			ft_checktype(char c, t_flag *flag);
t_flag			*ft_getflag(const char *str, int *i);
char			*ft_addspace(char *p_var);
void			ft_mvdiez(char *str, int field);
void			ft_put_c_instring(char *str, char c, int size);
char			*ft_putfieldleft(char *p_field, char *p_var, t_flag *flag);
char			*ft_putfield(char *p_var, t_flag *flag);
void			ft_movesigne(char *new_pvar);
size_t			ft_strlen(const char *s);
char			*ft_addzero(char *p_var, t_flag *flag, int size_char);
char			*ft_cutstring(char *p_var, int preci);
char			*ft_putpreci(char *p_var, t_flag *flag);
char			*ft_getstring(char *str);
char			*ft_returnp_var(char *p_var, t_flag *flag);
int				ft_getpreciuni(wchar_t *str, int preci);
char			*ft_get_charunic(wint_t c, t_flag *flag);
char			*ft_get_stringunic(wchar_t *str, t_flag *flag);
char			*ft_get_stringunic(wchar_t *str, t_flag *flag);
void			ft_splitbyteuni(char *p_uni, wint_t c, int nb_byte);
char			*ft_getuni(wint_t c);
char			*ft_ulltoa_base(unsigned long long nb, int type);
int				ft_checkvar(char *str);
char			*ft_putdiez(char *p_var, t_flag *flag);
char			*ft_lltoa(long long n);
char			*ft_getchar(char c, t_flag *flag);
char			*ft_get_convertion(va_list ap, t_flag *flag);
void			*ft_memalloc(size_t size);
char			*ft_newvar(va_list ap, t_flag *flag);
int				ft_printf(const char *str, ...);
int				ft_atoi(const char *str);
char			*ft_strcpy(char *dst, const char *src);
char			*ft_strcat(char *s1, const char *s2);
char			*ft_strjoin(char const *s1, char const *s2);
char			*ft_ulltoa(unsigned long long n);
char			*ft_strjoinfree(char *s1, char *s2);
void			ft_rev(char *s1);
char			*ft_strdup(const char *s1);
#endif
