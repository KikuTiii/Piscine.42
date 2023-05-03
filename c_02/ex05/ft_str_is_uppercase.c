/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Kikuti <Kikuti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 14:49:22 by Kikuti           #+#    #+#             */
/*   Updated: 2023/03/16 14:55:05 by Kikuti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int    ft_str_is_uppercase(char *str);

int    ft_str_is_uppercase(char *str)
{
    int    i;
    int    c;

    i = 0;
    while (str [i] != '\0')
    {
        c = str[i];
        if (!(c >= 'A' && c <= 'Z'))
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

//     ft_str_is_uppercase(str);
//     printf("%i\n", ft_str_is_uppercase(str));
// }