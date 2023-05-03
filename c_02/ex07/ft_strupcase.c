/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Kikuti <Kikuti@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 15:50:00 by Kikuti           #+#    #+#             */
/*   Updated: 2023/05/03 18:00:30 by Kikuti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int    *ft_strupcase(char *str);

int    *ft_strupcase(char *str)
{
    int    i;

    i = 0;
    while (str [i] != '\0')
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }
            i++;
    }
    return (str);
}

// int    main(void)
// {
//      char    str[] = "abcdef";

//      ft_strupcase(str);
//      printf("%s\n", str);
//  }