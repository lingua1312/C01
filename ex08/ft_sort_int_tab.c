/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsichtig <nsichtig@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 13:17:58 by nsichtig          #+#    #+#             */
/*   Updated: 2024/11/19 13:17:58 by nsichtig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void    ft_sort_int_tab(int *tab, int size)
{
    int i;
    int j;
    int temp;

    i = 0;
    while (i < size)
    {
        j = i + 1;
        while (j < size)
        {
            if (tab[i] > tab[j])
            {
                temp = tab[i];
                tab[i] = tab[j];
                tab[j] = temp;
            }
            j++;
        }
        i++;
    }
}

// int main(void)
// {
//     int tab[] = {9, 8, 6, 6, 3, 4, 3, 2, 1};
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
//     ft_sort_int_tab(tab, size);
//     i = 0;
//     while (i < size)
//     {
//         printf("%d ", tab[i]);
//         i++;
//     }
//     return (0);
// }