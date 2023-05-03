/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Kikuti <Kikuti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 09:35:25 by Kikuti           #+#    #+#             */
/*   Updated: 2023/03/22 11:52:05 by Kikuti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putnbr(int nb)
{
    char    i;

    if (nb < 0)
    {
        write(1, "-", 1);
        i = (nb % 10) * -1 + '0';
    }
    else
    {
        i = (nb % 10) + '0';
    }
    nb = nb / 10;
    if (nb < 1)
    {
        nb = nb * -1;
    }
    if (nb != 0)
    {
        ft_putnbr(nb);
    }
    write(1, &i, 1);
}

// int    main(void)
// {
//     ft_putnbr(-2147483648);
//     return (0);
// }