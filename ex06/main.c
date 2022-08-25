/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcheng <mcheng@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 10:52:48 by mcheng            #+#    #+#             */
/*   Updated: 2022/08/25 10:58:56 by mcheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>

int ft_str_is_printable(char *str)
{
        int     printable;
        int     count;

        count = 0;
        while (str[count] != '\0')
        {
                if (str[count] < 32 || str[count] > 126)
                {
                        printable = 0;
                        count++;
                }
                else
                {
                        printable = 1;
                        count++;
                }
        }
        return (printable);
}

int main(void)
{
        char str_valid[] = "ABC123abc%#^$_/";
        char str_invalid[] = "DLE";

        printf("ABC123abc%#^$_/\n");
        printf("valid: %d\n", ft_str_is_printable(str_valid));
        printf("DLE\n");
        printf("invalid: %d\n", ft_str_is_printable(str_invalid));
}
