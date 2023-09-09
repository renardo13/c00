/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melmarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 12:31:16 by melmarti          #+#    #+#             */
/*   Updated: 2023/09/09 16:02:29 by melmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

void	ft_print_numbers(void)
{
	char	a;

	a = 48;
	while (a <= 57)
	{
		ft_putchar(a);
		a++;
	}
}

/*int	main(void)
{
	ft_print_numbers();
	return (0);
}*/
