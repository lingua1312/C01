/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsichtig <nsichtig@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 11:48:29 by nsichtig          #+#    #+#             */
/*   Updated: 2024/11/19 11:48:29 by nsichtig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void    ft_swap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

// int main(void)
// {
//     int a;
//     int b;

//     a = 42;
//     b = 84;
//     printf("Before swap: a = %d, b = %d\n", a, b);
//     ft_swap(&a, &b);
//     printf("After swap: a = %d, b = %d\n", a, b);
//     return (0);
// }