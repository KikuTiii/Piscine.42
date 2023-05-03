/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Kikuti <Kikuti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 14:32:40 by Kikuti           #+#    #+#             */
/*   Updated: 2023/03/16 14:55:49 by Kikuti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_lowercase(char *str);

int ft_str_is_lowercase(char *str)
{
	int i;
	int c;

	i = 0;
	while (str[i] != '\0')
	{
		c = str[i];
		if (!(c >= 'a' && c <= 'z'))
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

//     ft_str_is_lowercase(str);
//     printf("%i\n", ft_str_is_lowercase(str));
// }