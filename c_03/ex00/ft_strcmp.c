/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Kikuti <Kikuti@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 10:47:35 by Kikuti           #+#    #+#             */
/*   Updated: 2023/05/03 19:09:10 by Kikuti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int    ft_strcmp(char *s1, char *s2)
{
    int    i;

    i = 0;
    while (s1[i] != '\0' && s2[i] != '\0')
    {
        if (s1[i] < s2[i])
            return (s1[i] - s2[i]);
        else if (s1[i] > s2[i])
        {
            return (s1[i] - s2[i]);
        }
            i++;
    }
    return (0);
}

int main() {
	char *str0 = "";
	printf("std: %i, yours: %i\n", strcmp(str0, "a"), ft_strcmp(str0, "a"));

	char *str1 = (char *)"abcadef";
	char *str2 = (char *)"abcadef";
	printf("std: %i, yours: %i\n", strcmp(str1, str2), ft_strcmp(str1, str2));

	str1 = "abcadef";
	str2 = "abcad";
	printf("std: %i, yours: %i\n", strcmp(str1, str2), ft_strcmp(str1, str2));

	str1 = "abcad";
	str2 = "abcadtg";
	printf("std: %i, yours: %i\n", strcmp(str1, str2), ft_strcmp(str1, str2));
}