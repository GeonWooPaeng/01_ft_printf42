/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpaeng <gpaeng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/04 20:17:32 by gpaeng            #+#    #+#             */
/*   Updated: 2021/01/08 15:53:02 by gpaeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void ft_init_foption(t_fopt *fopt)
{
	fopt->fminus = 0;
	fopt->fzero = 0;
	fopt->width = 0;
	fopt->dot = 0;
	fopt->nprec = 0;
	fopt->type = 0;
	fopt->lprint = 0;
}

void	ft_putchar(char c, t_fopt *fopt)
{
	write(1, &c, 1);
	fopt->lprint += 1;
}

int ft_strlen(char *str)
{
	int idx;

	idx = 0;
	while(str[idx])
	{
		idx++;
	}
	return (idx);
}

