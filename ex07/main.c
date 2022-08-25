/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcheng <mcheng@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 11:19:03 by mcheng            #+#    #+#             */
/*   Updated: 2022/08/25 11:37:39 by mcheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>

int ft_strupcase(char *str)
{
        int     uppercase;
        int     count;

        count = 0;
        while (str[count] != '\0')
        {
                if (str[count] >= 'a' && str[count] <= 'z')
                {
                        str[count] -= 32;
                }
		count++;
        }
        return (uppercase);
}

int main(void)
{
        char src[] = "hello world";
        char *result;

        printf("Lowercase:\n");
        printf("%s\n", src);
        result = ft_strupcase(src);
	printf("Uppercase:\n");
        printf("%s\n", src);
}
