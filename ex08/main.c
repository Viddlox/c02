/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcheng <mcheng@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 11:38:26 by mcheng            #+#    #+#             */
/*   Updated: 2022/08/25 11:45:35 by mcheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>

int ft_strlowcase(char *str)
{
        int     lowercase;
        int     count;

        count = 0;
        while (str[count] != '\0')
        {
                if (str[count] >= 'A' && str[count] <= 'Z')
                {
                        str[count] += 32;
                }
                count++;
        }
        return (lowercase);
}

int main(void)
{
        char src[] = "HELLO WORLD";
        char *result;

        printf("Uppercase:\n");
        printf("%s\n", src);
        result = ft_strlowcase(src);
        printf("Lowercase:\n");
        printf("%s\n", src);
}
