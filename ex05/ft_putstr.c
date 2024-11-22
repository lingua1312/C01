/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsichtig <nsichtig@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 13:17:50 by nsichtig          #+#    #+#             */
/*   Updated: 2024/11/19 13:17:50 by nsichtig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putstr(char *str)
{
    while (*str != '\0')
    {
        write(1, str, 1);
        str++;
    }
}

// int main(void)
// {
//     char str[] = "Hello World!";
//     ft_putstr(str);
//     return (0);
// }