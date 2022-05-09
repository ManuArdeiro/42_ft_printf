/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_select_var.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jolopez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 17:47:44 by jolopez-          #+#    #+#             */
/*   Updated: 2022/05/08 18:59:22 by jolopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_var_print_main(char c, va_list args, int *sol, t_options *flags)
{
	if (c == 'c' && flags->minus == 1)
		ft_var_print_chr_left(va_arg(args, int), sol, flags);
	if (c == 'c' && flags->minus == 0)
		ft_var_print_chr_right(va_arg(args, int), sol, flags);
	if (c == 's' && flags->minus == 1)
		ft_var_print_str_left(va_arg(args, char *), sol, flags);
	if (c == 's' && flags->minus == 0)
		ft_var_print_str_right(va_arg(args, char *), sol, flags);
	if (c == 'p')
		ft_var_print_pointer(va_arg(args, void *), sol, flags);
	if ((c == 'd' || c == 'i') && flags->minus == 1)
		ft_var_print_nbr_left(va_arg(args, int), sol, flags);
	if ((c == 'd' || c == 'i') && flags->minus == 0)
		ft_var_print_nbr_right(va_arg(args, int), sol, flags);
	if (c == 'u' && flags->minus == 1)
		ft_var_print_unsigned_left(va_arg(args, unsigned int), sol, flags);
	if (c == 'u' && flags->minus == 0)
		ft_var_print_unsigned_right(va_arg(args, unsigned int), sol, flags);
	if ((c == 'x' || c == 'X') && flags->minus == 1)
		ft_var_print_hex_left(c, va_arg(args, unsigned int), sol, flags);
	if ((c == 'x' || c == 'X') && flags->minus == 0)
		ft_var_print_hex_right(c, va_arg(args, unsigned int), sol, flags);
	if (*sol == -1)
		return ;
}