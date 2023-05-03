/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Kikuti <Kikuti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 17:57:13 by Kikuti           #+#    #+#             */
/*   Updated: 2023/03/10 17:45:35 by Kikuti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_operation(int x, int y)
{
    char    num [5];

    num[0] = x / 10 + 48;
    num[1] = x % 10 + 48;
    num[2] = ' ';
    num[3] = y / 10 + 48;
    num[4] = y % 10 + 48;
    write(1, &num, 5);
}

void    ft_print_comb2(void)
{
    int    x;
    int    y;

    x = 0;
    y = 1;
    while (x <= 98)
    {
        y = x + 1;
        while (y <= 99)
        {
            ft_operation(x, y);
            if (x < 98)
                write(1, ", ", 2);
            y++;
        }
        x++;
    }
}
