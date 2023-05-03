/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Kikuti <Kikuti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 11:53:58 by Kikuti           #+#    #+#             */
/*   Updated: 2023/03/22 14:30:53 by Kikuti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int    ft_atoi(char *str)
{
    int    i;
    int    mult;
    int    nb;

    mult = 1;
    nb = 0;
    i = 0;
    while ((str[i] >= 9 && str[i] <= 13) || (str[i] == 32))
    {
        i++;
    }
    while (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            mult *= -1;
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        nb = (nb * 10) + (str[i] - '0');
        i++;
    }
    return (nb * mult);
}

// int    main(void)
// {
//     char str[] = " ---+--+1234ab567";
//     ft_atoi(str);
//     printf("%i\n", ft_atoi(str));
// }
