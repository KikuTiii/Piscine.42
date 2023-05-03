/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Kikuti <Kikuti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 14:59:44 by Kikuti           #+#    #+#             */
/*   Updated: 2023/03/16 15:47:26 by Kikuti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int    ft_str_is_printable(char *str);

int    ft_str_is_printable(char *str)
{
    int    i;
    int    c;

    i = 0;
    while (str [i] != '\0')
    {
        c = str[i];
        if (!(c >= 32 && c <= 126))
        {
            return (0);
        }
            i++;
    }
    return (1);
}

// int    main(void)
// {
//     char    str[] = "U+0001";

//     ft_str_is_printable(str);
//     printf("%i\n", ft_str_is_printable(str));
// }