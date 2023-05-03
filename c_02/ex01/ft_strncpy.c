/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Kikuti <Kikuti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 09:22:52 by Kikuti           #+#    #+#             */
/*   Updated: 2023/03/17 17:50:49 by Kikuti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char    *ft_strncpy(char *dest, char *src, unsigned int n);

char    *ft_strncpy(char *dest, char *src, unsigned int n)
{
    unsigned int    i;

    i = 0;
    while (src[i] != '\0' && i < n)
    {
        dest[i] = src[i];
        i++;
    }
    while (i <= n)
    {
        dest[i] = '\0';
        i++;
    }
    return (dest);
}

// int    main(void)
// {
//     unsigned gcc -Wextra -Werror -Wallint    n;
//     char    src[] =    "42 Sao paulo";
//     char    dest[] = "Destino.";

//     n    = 2;
//     printf("antes: %s\n", src);
//     ft_strncpy(dest, src, n);
//     printf("depois: %s\n", dest);
//     return(0);
// }
