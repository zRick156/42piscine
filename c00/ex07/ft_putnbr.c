/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rick <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 19:19:15 by rick              #+#    #+#             */
/*   Updated: 2023/02/19 00:39:14 by rick             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ft_controllo(int nb)
{
	if (nb == 0)
	{
		write(1, "0", 1);
		return (0);
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		return (nb *= -1);
	}
	return (nb);
}

void	ft_putnbr(int nb)
{
	int	a;
	int	contatore;
	int	num[10];

	nb = ft_controllo(nb);
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
