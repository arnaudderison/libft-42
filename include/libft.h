/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arnaud <arnaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 22:41:28 by arnaud            #+#    #+#             */
/*   Updated: 2023/10/10 23:07:58 by arnaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

void	ft_bzero(void *s, size_t n);
void	*ft_memccpy(void *dest, const void *src, int c, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memset(void *s, int c, size_t n);
char	*ft_strcat(char *destination, const char *source);
char	*ft_strchr(const char *str, int charac);
char	*ft_strcpy(char *dest, const char *src);
char	*ft_strdup(const char *str);
size_t	ft_strlcat(char *destination, const char *source, size_t size);
int		ft_strlen(const char *s);
char	*ft_strncat(char *destination, const char *source, size_t n);
char	*ft_strnstr(const char *str, const char *to_find, size_t len);
char	*ft_strncpy(char *dest, const char *src, size_t n);
char	*ft_strrchr(const char *str, int charac);
char	*ft_strstr(const char *str, const char *to_find);
int		ft_strcmp(const char *s1, const char *s2);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
int		ft_atoi(const char *str);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memalloc(size_t size);

#endif
