/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Kikuti <Kikuti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 09:27:38 by Kikuti           #+#    #+#             */
/*   Updated: 2023/03/22 11:54:04 by Kikuti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putstr(char *str)
{    
    while (*str != '\0')
    {
        write (1, str++, 1);
    }
}

/* int main(void)
{
	char *str = "Hello World!";
	
	ft_putstr(str);
	return (0);
} */
