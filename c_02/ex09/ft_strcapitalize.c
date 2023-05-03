/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Kikuti <Kikuti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 11:18:10 by Kikuti           #+#    #+#             */
/*   Updated: 2023/03/17 11:34:05 by Kikuti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int i;
	
	i = 0;
	while (str[i])
	{
		if ((i - 1 == 0 && str[i] != ' ')
		|| (str[i - 1] >= 97 && str[i - 1] <= 122) 
		|| (str[i - 1] >= 65 && str[i - 1] <= 90)
		|| (str[i - 1] >= '1' && str[i - 1] <= '9'))
		{
		}
		else if(str[i] >= 97 && str[i] <= 122)
		{
			str[i] -= 32;
		}
		i++;
	}	
	return str;
}

#include <stdio.h>

int main(void)
{
	char s[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	ft_strcapitalize(s);
	printf("%s", s);
}