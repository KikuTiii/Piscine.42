/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Kikuti <Kikuti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 14:53:58 by Kikuti           #+#    #+#             */
/*   Updated: 2023/03/18 15:31:17 by Kikuti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strstr(char *str, char *to_find)
{
	int i;
	int j;

	i = 0;
	if (to_find[0] == '\0')
	{
		return (str);
	}
	while (str[i])
	{
		j = 0;
		while (str[i + j] == to_find[j])
		{
			if (to_find[j + 1] == '\0')
			{
				return (str + i);
			}
			j++;
		}
		i++;
	}
	return (0);
}

// CPP program to illustrate strstr()
#include <stdio.h>

int main()
{
	// Take any two strings
	char s1[] = "vamostestarseila";
	char s2[] = "testar";
	char *p;

	// Find first occurrence of s2 in s1
	p = ft_strstr(s1, s2);

	// Prints the result
	if (p)
	{
		printf("String found\n");
		printf("First occurrence of string '%s' in '%s' is '%s'", s2, s1, p);
	}
	else
		printf("String not found\n");

	return 0;
}