/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acasado <acasado@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 15:16:13 by acasado           #+#    #+#             */
/*   Updated: 2023/03/14 18:22:33 by acasado          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	array_temp;

	i = 0;
	while (i < (size / 2))
	{
		array_temp = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = array_temp;
		i++;
	}
}
