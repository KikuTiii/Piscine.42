/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Kikuti <Kikuti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 09:49:17 by kikuti           #+#    #+#             */
/*   Updated: 2023/03/27 16:02:09 by Kikuti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_digit(int n);

void	ft_putnbr(int nb)
{
	long long nbl;
	
	nbl = nb;	
	if (nbl < 0)
	{
		nbl = nbl - 1;
		write(1, "-", 1);
	}
	if (nbl / 10)
	{
		ft_putnbr(nbl / 10);
	}
	print_digit(nbl % 10);
}

void	print_digit(int n)
{
	char	c;

	c = n + '0';
	write(1, &c, 1);
}

int main(void)
{
	ft_putnbr(42);
	return(0);
}