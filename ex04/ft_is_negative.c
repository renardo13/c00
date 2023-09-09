/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melmarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 11:43:14 by melmarti          #+#    #+#             */
/*   Updated: 2023/09/09 20:22:48 by melmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

void	ft_is_negative(int nb)
{
	char	n;
	char	p;

	n = 'N';
	p = 'P';
	if (nb >= 0)
	{
		ft_putchar(p);
	}
	else
	{
		ft_putchar(n);
	}
}
/*int   main(void)
{
        ft_is_negative(0);
}*/
