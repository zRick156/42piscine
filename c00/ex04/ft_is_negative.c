/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rick <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 00:35:29 by rick              #+#    #+#             */
/*   Updated: 2023/02/19 00:37:48 by rick             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd>

void	ft_is_negatice(int n)
{
	if (n < 0)
		write(1, "N", 1);
	else
		write(1, "P", 1);
}
