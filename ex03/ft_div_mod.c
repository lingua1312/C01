/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsichtig <nsichtig@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 13:15:52 by nsichtig          #+#    #+#             */
/*   Updated: 2024/11/19 13:15:52 by nsichtig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void    ft_div_mod(int a, int b, int *div, int *mod)
{
    *div = a / b;
    *mod = a % b;
}

// int main(void)
// {
//     int a;
//     int b;
//     int div;
//     int mod;

//     a = 42;
//     b = 13;
//     ft_div_mod(a, b, &div, &mod);
//     printf("The division of a and b is: %d\n", div);
//     printf("The remainder of a and b is: %d\n", mod);
//     return (0);
// }