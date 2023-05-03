/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 17:34:46 by maolivei          #+#    #+#             */
/*   Updated: 2023/05/03 19:23:15 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_ultimate_strcpy(int argc, char **argv, char *sep, char *dest)
{
	int		i;
	int		j;
	int		k;
	char	*start;

	i = 0;
	start = dest;
	while (i < argc && argv[i])
	{
		j = 0;
		while (argv[i][j])
			*dest++ = argv[i][j++];
		k = 0;
		i++;
		while (sep[k] && i < argc)
			*dest++ = sep[k++];
	}
	*dest = '\0';
	return (start);
}

int	ft_malloc_size(int argc, char **argv, int sep_size)
{
	int	i;
	int	j;
	int	size;

	i = 0;
	size = 0;
	while (i < argc && argv[i])
	{
		j = 0;
		while (argv[i][j++])
			size++;
		i++;
	}
	size += sep_size * (argc - 1);
	return (size);
}

int	ft_strlen(char *str)
{
	int	size;

	size = 0;
	while (*str++)
		size++;
	return (size);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*dest;
	int		sep_size;

	if (size == 0)
	{
		dest = malloc(1);
		*dest = '\0';
		return (dest);
	}
	sep_size = ft_strlen(sep);
	dest = malloc(ft_malloc_size(size, strs, sep_size) + 1);
	if (dest == NULL)
		return (NULL);
	return (ft_ultimate_strcpy(size, strs, sep, dest));
}

// #include <stdio.h>

// int	main()
// {
// 	char *s[] = {"pneumoultramicroscopicossilicovulcanoconiose",
// 				 "palavra",
// 				 "cantada"};
// 	char *result = ft_strjoin(3, s, "SEPARADOR");

// 	printf("%s\n", result);
// }
