/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guda-sil@student.42sp.org.br <guda-sil@    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 01:18:50 by guda-sil@st       #+#    #+#             */
/*   Updated: 2022/03/31 19:08:12 by guda-sil@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <unistd.h>

/**
* @brief Compares two strings and returns the result for s1 - s2
*
* @param s1 The first string to compare
* @param s2 The second string
* @param n Says until we want to compare the two strings
* @return The result of the comparison
*/
int		ft_strncmp(const char *s1, const char *s2, size_t n);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);

/**
* @brief Return the lenght of a string. Dont' count the '\0'
*/
size_t	ft_strlen(const char *s);

/**
* @brief This functions fill the n bytes of a string with the C parameter
* @param s The string that will be filled
* @param c The C parameter to fill. The valor is passed as Int
* but is converted to char
*/
void	*ft_memset(void *s, int c, size_t n);
/**
* @brief This function zero a byte string
*/
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);

#endif
