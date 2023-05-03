/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Kikuti <Kikuti@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 13:28:53 by Kikuti          #+#    #+#             */
/*   Updated: 2023/05/03 17:52:53 by Kikuti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void print_number(int n);

void ft_print_comb(int n)
{
    int combn[n];
    int i;

    if (n <= 0 || n >= 10)
        return ;
    else
    {
        i = 0;
        while (i < n)
        {
            combn[i] = i;
            i++;
        }
        while (i > 0)
        {
            int max_digit = 10;
            i = 0;
            while (i < n)
            {
                print_number(combn[i] + '0');
                i++;
            }
            i = n;
            while(i--)
            {
                int digit = combn[i];
                if(digit < --max_digit)
                {
                    do
                    {
                        combn[i++] = ++digit;
                    } 
                    while (i < n);   
                    print_number(',');
                    print_number(' ');
                    break;
                }
            }
        }
        print_number('\n');
    }
}

void print_number(int n)
{
    write(1, &n, 1);
}

int main(void)
{
    ft_print_comb(2);
    return (0);
}