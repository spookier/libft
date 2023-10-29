/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acostin <acostin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 14:13:24 by acostin           #+#    #+#             */
/*   Updated: 2022/11/10 16:43:21 by acostin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <unistd.h>

int			ft_isalpha(int c);
int			ft_isdigit(int c);
int			ft_isalnum(int c);
int			ft_isascii(int c);
int			ft_isprint(int c);
int			ft_toupper(int c);
int			ft_tolower(int c);
int			ft_strncmp(const char *s1, const char *s2, size_t n);
int 		ft_memcmp(const void *pointer1, const void *pointer2, size_t size);
int 		ft_atoi(const char *str);
size_t		ft_strlen(const char *s);
size_t 		ft_strlcpy(char *dst, const char *src, size_t size);
size_t		ft_strlcat(char *dst, const char *src, size_t size);
void		*ft_memset(void *s, int c, size_t n);
void		ft_bzero(void *s, size_t n);
void		*ft_memcpy(void *dst, const void *src, size_t length);
void 		*ft_memmove(void *dest, const void *src, size_t n);
void 		*ft_memchr(const void *str, int c, size_t n);
void 		*ft_calloc(size_t num, size_t size);
char		*ft_strchr(const char *s, int c);
char		*ft_strrchr(const char *s, int c);
char 		*ft_strnstr(const char *big, const char *little, size_t len);
char 		*ft_strdup(const char *str);
char 		*ft_substr(char const *str, unsigned int start, size_t len);

#endif