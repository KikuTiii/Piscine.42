/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Kikuti <Kikuti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 08:47:57 by Kikuti           #+#    #+#             */
/*   Updated: 2023/03/16 14:57:33 by Kikuti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int    ft_str_is_alph(char *str);

int    ft_str_is_alpha(char *str)
{
    int    i;
    int    c;

    i = 0;
    while (str [i] != '\0')
    {
        c = str[i];
        if (!((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')))
        {
            return (0);
        }
            i++;
    }
    return (1);
}

// int    main( void)
// {
//     char    str[] = "";
//
//     ft_str_is_alpha(str);
//     printf("%i\n", ft_str_is_alpha(str));
// }