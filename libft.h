/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guda-sil@student.42sp.org.br <guda-sil@    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 01:18:50 by guda-sil@st       #+#    #+#             */
/*   Updated: 2022/04/02 00:48:14 by guda-sil@st      ###   ########.fr       */
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
* @brief Return the lenght of a string. Dont' count the '\0' (null character).
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
* @brief This erases in some memory area. Thema are to be
* deleted is passed as n bytes
* @param s The area to be erased
* @param n The number of bytes to be erased
*/
void	ft_bzero(void *s, size_t n);

/**
 * @brief This function copys a memory area to other memory area.
 *
 * @param dest dest area to receive thec copy
 * @param src source area to copy
 * @param n n bytes that will be copied to dest
 * @return returns a void pointer to dest.
 */
void	*ft_memcpy(void *dest, const void *src, size_t n);

/**
 * @brief This function copies n bytes from memory area src to dest.
 * The memory area may overlap.
 *
 * @param dest Memory area dest for the copied bytes.
 * @param src Memory area to copy from.
 * @param n N bytes to copy.
 * @return Returns a void pointer to dest
 */
void	*ft_memmove(void *dest, void *src, size_t n);

size_t	ft_strlcat(char *dst, const char *src, size_t size);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);

#endif
