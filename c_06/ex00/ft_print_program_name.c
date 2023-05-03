/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 11:20:46 by acasado           #+#    #+#             */
/*   Updated: 2023/05/03 19:22:18 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int    main(int argc, char **argv)
{
    char    *name;

    name = argv[0];
    if (argc >= 1)
    {
        while (*name != '\0')
        {
            write(1, name, 1);
            name++;
        }
        write(1, "\n", 1);
    }
    return (0);
}
