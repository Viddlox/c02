/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcheng <mcheng@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 10:48:40 by mcheng            #+#    #+#             */
/*   Updated: 2022/08/25 10:51:53 by mcheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>

int ft_str_is_uppercase(char *str)
{
        int     uppercase;
        int     count;

        count = 0;
        while (str[count] != '\0')
        {
                if (str[count] < 'A' || str[count] > 'Z')
                {
                        uppercase = 0;
                        count++;
                }
                else
                {
                        uppercase = 1;
                        count++;
                }
        }
        return (uppercase);
}

int main(void)
{
        char str_valid[] = "ABCDEFG";
        char str_invalid[] = "abc123$$!!";

        printf("abcdefg\n");
        printf("valid: %d\n", ft_str_is_uppercase(str_valid));
        printf("ABC123$$!!\n");
        printf("invalid: %d\n", ft_str_is_uppercase(str_invalid));
}
