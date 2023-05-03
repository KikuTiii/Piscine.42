/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 15:40:23 by acasado           #+#    #+#             */
/*   Updated: 2023/05/03 19:22:47 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int    ft_strlen(char *str)
{
    int    i;

    i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return (i);
}

int    main(int argc, char *argv[])
{
    int        i;
    int        y;
    char    *a;

    i = 1;
    while (i < argc)
    {
        y = i + 1;
        if (ft_strcmp(argv[i],argv[y]) > 0)
        {
            a = argv[i];
            argv[i] = argv[y];
            argv[y] = a;
            i = 0;
        }
    }
    ft_putchar(ft_strlen(argv[i]));
}
