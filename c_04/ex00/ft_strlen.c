/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Kikuti <Kikuti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 09:18:03 by Kikuti           #+#    #+#             */
/*   Updated: 2023/03/22 11:56:30 by Kikuti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}

/* #include <stdio.h>

int	main(void)
{
	char *str = "sera que foi?";
	int result;
	
	result = ft_strlen(str);
	printf("%d", result);
	return(0);
} */
