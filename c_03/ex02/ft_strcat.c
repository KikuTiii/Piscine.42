/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Kikuti <Kikuti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 13:42:30 by Kikuti           #+#    #+#             */
/*   Updated: 2023/03/18 14:41:05 by Kikuti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_strlen(char *dest)
{
	int i;

	i = 0;
	while ('\0' != dest[i])
	{
		i++;
	}
	return (i);
}

char *ft_strcat(char *dest, char *src)
{
	int i;
	int k;

	i = ft_strlen(dest);
	k = 0;

	while (src[k] != '\0')
	{
		dest[i + k] = src[k];
		k++;
	}
	return (dest);
}

#include <stdio.h>
#include <string.h>

int main(void)
{

	char origem[] = {" mundo"};
	char destino[100] = {"Ola"};
	// "Ola mundo"

	// char *resultado = strcat(destino, origem);
	char *resultado = ft_strcat(destino, origem);

	printf("%s", resultado);

	//  strcpy(buff, "Hello ");
	// ft_strcat(buff, "world");

	/* print the output to test it */
	//  printf("%s\n", buff);

	return 0;
}