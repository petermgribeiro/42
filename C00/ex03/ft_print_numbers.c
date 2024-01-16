/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgomes-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 17:25:15 by pgomes-r          #+#    #+#             */
/*   Updated: 2024/01/16 11:47:39 by pgomes-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_numbers(void)
{
	char	numb;

	numb = '0';
	while (numb <= '9')
	{
		write(1, &numb, 1);
		numb++;
	}
}
/*
int	main(void)
{
	ft_print_numbers ();
	return 0;
}
*/
