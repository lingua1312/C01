/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsichtig <nsichtig@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 13:14:09 by nsichtig          #+#    #+#             */
/*   Updated: 2024/11/19 13:14:09 by nsichtig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void    ft_ultimate_div_mod(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *a / *b;
    *b = temp % *b;
}

// int main(void)
// {
//     int a;
//     int b;

//     a = 42;
//     b = 13;
//     ft_ultimate_div_mod(&a, &b);
//     printf("The division of a and b is: %d\n", a);
//     printf("The remainder of a and b is: %d\n", b);
//     return (0);
// }
