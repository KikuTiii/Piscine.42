/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Kikuti <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 14:58:19 by Kikuti           #+#    #+#             */
/*   Updated: 2023/03/10 16:57:32 by Kikuti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void    ft_print_reverse_alphabet(void)
{
    write(1, "zyxwvutsrqponmlkjihgfedcba", 26);
}
