/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Kikuti <Kikuti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 11:37:14 by Kikuti           #+#    #+#             */
/*   Updated: 2023/03/17 12:02:48 by Kikuti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strlen(char *str);

int ft_strlen(char *str)
{
    int size;

    size = 0;
    while (str[size] != '\0')
    {
        size++;
    }
    return (size);
}

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
    unsigned int a;
    unsigned int b;
    unsigned int c;

    a = 0;
    b = ft_strlen(src);
    c = ft_strlen(dest);
    if (size > 0)
    {
        while (a < size - 1 && src[a] != 0)
        {
            dest[a] = src[a];
            a++;
        }
        dest[a] = 0;
    }
    return (b);
}
