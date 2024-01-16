/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgomes-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 15:17:58 by pgomes-r          #+#    #+#             */
/*   Updated: 2024/01/16 11:54:35 by pgomes-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_is_negative(int n)
{
	if (n < 0)
	{
		write (1, "N\n", 2);
	}
	else
	{
		write (1, "P\n", 2);
	}
}
/*
int	main(void)
{
	ft_is_negative(-5);
	ft_is_negative(2);
	ft_is_negative(3);
	return 0;
}
*/
