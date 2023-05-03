/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 22:37:43 by maolivei          #+#    #+#             */
/*   Updated: 2023/05/03 19:23:10 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	*range = 0;
	if ((max - min) < 1)
		return (0);
	i = 0;
	*range = (int *)malloc(sizeof(int) * (max - min));
	if (*range == NULL)
		return (-1);
	while (min < max)
		(*range)[i++] = min++;
	return (i);
}

// #include <stdio.h>

// int	main(void)
// {
// 	int	**range;
// 	int	*ptr;

// 	range = &ptr;
// 	printf("%d\n", ft_ultimate_range(range, 3, 5));
// 	printf("%d ", (*range)[0]);
// 	printf("%d\n", (*range)[1]);
// 	return (0);
// }
