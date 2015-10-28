
#ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>
# include <stdlib.h>
size_t 	ft_strlen(const char *s);
void	ft_putchar(char c);
void	ft_putnbr(int n);
void	ft_putstr(char const *s);
char	*ft_strdup(const char *s);
int	ft_isalpha(int c);
int	ft_isdigit(int c);
int	ft_isascii(int c);
int	ft_atoi(const char *nptr);
void	ft_bzero(void *s, size_t n);
int	ft_strcmp(const char *s1, const char *s2);
int	ft_strncmp(const char *s1, const char *s2, size_t n);
int	ft_toupper(int c);
int	ft_tolower(int c);
void	ft_strclr(char *s);
int	ft_strequ(const char *s1, const char *s2);
void	ft_putendl(const char *s);
#endif
