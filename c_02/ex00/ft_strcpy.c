/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: KikuTi <KikuTi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 08:38:41 by KikuTi           #+#    #+#             */
/*   Updated: 2023/03/15 09:23:16 by KikuTi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char    *ft_strcpy(char *dest, char *src)
{
    int i;

    i = 0;
    while (src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';

    return (dest);
}

// int    main(void)
// {
//     char src[] = "Vai curintia";
//     char dest[12];
//     //char dest[13] = '\0';

//        ft_strcpy(char dest, char src);

//     printf("%s\n", dest);

// }