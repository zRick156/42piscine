/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rick <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 19:19:15 by rick              #+#    #+#             */
/*   Updated: 2023/02/17 20:39:30 by rick             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putnbr(int nb)
{
	int	a;
	int	contatore;
	int	num[10];

	contatore = 0;
	a = nb;
	while (a > 0)
	{
		a = a / 10;
		++contatore;
	}
	a = contatore * 4;
	while (contatore > 0)
	{
		num[contatore - 1] = nb % 10 + 48;
		nb = nb / 10;
		contatore--;
	}
	write(1, &num, a);
}

int	main(void)
{
	ft_putnbr(42);
}
