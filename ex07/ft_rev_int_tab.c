/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsichtig <nsichtig@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 13:17:56 by nsichtig          #+#    #+#             */
/*   Updated: 2024/11/19 13:17:56 by nsichtig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void    ft_rev_int_tab(int *tab, int size)
{
    int i;
    int temp;

    i = 0;
    while (i < size / 2)
    {
        temp = tab[i];
        tab[i] = tab[size - i - 1];
        tab[size - i - 1] = temp;
        i++;
    }
}

// int main(void)
// {
//     int tab[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
//     int size;
//     int i;

//     size = 9;
//     i = 0;
//     while (i < size)
//     {
//         printf("%d ", tab[i]);
//         i++;
//     }
//     printf("\n");
//     ft_rev_int_tab(tab, size);
//     i = 0;
//     while (i < size)
//     {
//         printf("%d ", tab[i]);
//         i++;
//     }
//     return (0);
// }