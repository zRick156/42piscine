/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rick <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 18:05:15 by rick              #+#    #+#             */
/*   Updated: 2023/02/17 18:09:42 by rick             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_print_reverse_alphabet(void)
{
	int	a;

	a = 123;
	while (a > 97)
	{
		a--;
		write(1, &a, 1);
	}
}

int	main(void)
{
	ft_print_reverse_alphabet();
}
