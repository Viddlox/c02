/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcheng <mcheng@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 10:42:36 by mcheng            #+#    #+#             */
/*   Updated: 2022/08/25 10:47:23 by mcheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>

int ft_str_is_lowercase(char *str)
{
        int     lowercase;
        int     count;

        count = 0;
        while (str[count] != '\0')
        {
                if (str[count] < 'a' || str[count] > 'z')
                {
                        lowercase = 0;
                        count++;
                }
                else
                {
                        lowercase = 1;
                        count++;
                }
        }
        return (lowercase);
}

int main(void)
{
        char str_valid[] = "abcdefg";
        char str_invalid[] = "ABC123$$!!";

        printf("abcdefg\n");
        printf("valid: %d\n", ft_str_is_lowercase(str_valid));
        printf("ABC123$$!!\n");
        printf("invalid: %d\n", ft_str_is_lowercase(str_invalid));
}
