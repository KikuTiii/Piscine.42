/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Kikuti <Kikuti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 13:59:22 by Kikuti           #+#    #+#             */
/*   Updated: 2023/03/16 14:56:37 by Kikuti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int    ft_str_is_numeric(char *str);

int    ft_str_is_numeric(char *str)
{
    int    i;
    int    c;

    i = 0;
    while (str [i] != '\0')
    {
        c = str[i];
        if (!(c >= '0' && c <= '1'))
        {
            return (0);
        }
            i++;
    }
    return (1);
}

// int    main(void)
// {
//     char    str[] = "";

//     ft_str_is_numeric(str);
//     printf("%i\n", ft_str_is_numeric(str));
// }