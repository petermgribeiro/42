/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgomes-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 12:18:31 by pgomes-r          #+#    #+#             */
/*   Updated: 2024/01/16 11:44:30 by pgomes-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	c;

	c = 'z';
	while (c >= 'a')
	{
		write (1, &c, 1);
		c--;
	}
}
/*
int main ()
{
        ft_print_reverse_alphabet();
        return 0;
}
*/
