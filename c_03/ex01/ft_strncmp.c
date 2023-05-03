/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Kikuti <Kikuti@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 11:42:22 by Kikuti           #+#    #+#             */
/*   Updated: 2023/05/03 19:09:33 by Kikuti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int    ft_strncmp(char *s1, char *s2, unsigned int n)
{
    unsigned int    i;

    i = 0;
    while (s1[i] != '\0' && s2[i] != '\0')
    {
        if (s1[i] < s2[i] && i < n)
            return (s1[i] - s2[i]);
        else if (s1[i] > s2[i])
        {
            return (s1[i] - s2[i]);
        }
            i++;
    }
    return (0);
}

#include <string.h>
#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int main() {
	char *str1 = (char *)"xxxxxx";
	char *str2 = (char *)"yyyyyy";
	printf("std: %i, yours: %i\n", strncmp(str1, str2, 20), ft_strncmp(str1, str2, 20));
	printf("std: %i, yours: %i\n", strncmp(str1, str2, 0), ft_strncmp(str1, str2, 0));
	printf("std: %i, yours: %i\n", strncmp(str1, str2, 1), ft_strncmp(str1, str2, 1));

	str1 = "abcadef";
	str2 = "abcad";
	printf("std: %i, yours: %i\n", strncmp(str1, str2, 5), ft_strncmp(str1, str2, 5));
	printf("std: %i, yours: %i\n", strncmp(str1, str2, 6), ft_strncmp(str1, str2, 6));

	str1 = "abcad";
	str2 = "abcadtg";
	printf("std: %i, yours: %i\n", strncmp(str1, str2, 5), ft_strncmp(str1, str2, 5));
	printf("std: %i, yours: %i\n", strncmp(str1, str2, 6), ft_strncmp(str1, str2, 6));
}