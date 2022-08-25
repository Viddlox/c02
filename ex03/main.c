/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcheng <mcheng@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 10:25:20 by mcheng            #+#    #+#             */
/*   Updated: 2022/08/25 10:42:01 by mcheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>

int ft_str_is_numeric(char *str)
{
        int     numeric;
        int     count;

        count = 0;
        while (str[count] != '\0')
        {
                if (str[count] < '0' || str[count] > '9')
                {
                        numeric = 0;
                        count++;
                }
                else
                {
                        numeric = 1;
                        count++;
                }
        }
        return (numeric);
}

int main(void)
{
        char str_valid[] = "0123456789";
        char str_invalid[] = "nope";

        printf("0123456789\n");
        printf("valid: %d\n", ft_str_is_numeric(str_valid));
        printf("nope\n");
        printf("invalid: %d\n", ft_str_is_numeric(str_invalid));
}
