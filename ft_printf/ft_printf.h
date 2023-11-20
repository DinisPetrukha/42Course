/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpetrukh <dpetrukh@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 10:48:11 by dpetrukh          #+#    #+#             */
/*   Updated: 2023/10/30 14:53:57 by dpetrukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>
# include <stdint.h>

int	ft_printf(const char *str, ...);
int	ft_formatter(char symbol, va_list args);
int	ft_printf_char(char c);
int	ft_printf_str(char	*str);
int	ft_printf_nbr(long nbr, int base, int size);
int	ft_printf_ptr(unsigned long long ptr);

#endif
