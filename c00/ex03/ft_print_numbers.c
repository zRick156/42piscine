/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rick <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 18:13:08 by rick              #+#    #+#             */
/*   Updated: 2023/02/19 14:02:24 by rick             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_print_numbers(void)
{
	int	prt_num;

	prt_num = 48;
	while (prt_num <= 57)
	{
		write (1, &prt_num, 1);
		prt_num++;
	}
}

int	main(void)
{
	ft_print_numbers();
}
