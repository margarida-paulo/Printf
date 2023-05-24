/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvalerio <mvalerio@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 15:39:06 by mvalerio          #+#    #+#             */
/*   Updated: 2023/05/03 17:09:37 by mvalerio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "Libft/libft.h"

void	ft_putnbr_hex_lower_fd(unsigned long n, int fd, int *a);
void	ft_pointer_address(unsigned long n, int fd, int *a);
void	ft_putnbr_hex_upper_fd(unsigned long n, int fd, int *a);
void	ft_putnbr_unsigned_fd(unsigned long n, int fd, int *a);
void	ft_putnbr_printed(int n, int *a);
void	ft_putstr_printed(char *s, int *a);
void	ft_formater(size_t *i, const char *string, int *printed, va_list *list);
int		ft_printf(const char *string, ...);

#endif
