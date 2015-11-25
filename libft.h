/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sganon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 11:15:53 by sganon            #+#    #+#             */
/*   Updated: 2015/11/25 18:34:52 by sganon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>
# include <stdlib.h>

void	*ft_memcpy(void *dst, const void *src, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char	*ft_strmap(char const *s, char (*f)(char));
void	ft_bzero(void *s, size_t n);
size_t	ft_strlen(const char *s);
void	ft_putchar(char c);
void	ft_putnbr(int n);
void	ft_putstr(char const *s);
char	*ft_strdup(const char *s);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isascii(int c);
int		ft_atoi(const char *nptr);
void	ft_bzero(void *s, size_t n);
int		ft_strcmp(const char *s1, const char *s2);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
int		ft_toupper(int c);
int		ft_tolower(int c);
void	ft_strclr(char *s);
int		ft_strequ(const char *s1, const char *s2);
int		ft_strnequ(char const *s1, char const *s2, size_t n);
void	ft_putendl(const char *s);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(const char *s, int fd);
void	ft_putendl_fd(const char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
int		ft_isalnum(int c);
char	*ft_strcpy(char *dst, const char *src);
char	*ft_strncpy(char *dst, char *src, size_t n);
char	*ft_strcat(char *s1, char *s2);
char	*ft_strncat(char *s1, char *s2, size_t n);
char	*ft_strchr(const char *s, int c);
char	*ft_strstr(const char *s1, const char *s2);
char	*ft_strnstr(const char *s1, const char *s2, size_t n);
char	*ft_strrchr(const char *s, int c);
void	*ft_memset(void *b, int c, size_t len);
#endif
