/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcheng <mcheng@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 11:47:23 by mcheng            #+#    #+#             */
/*   Updated: 2022/08/25 12:39:08 by mcheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>

char ft_strcapitalize(char *str)
{	
	unsigned int	count;
	if (str[0] != '\0' && str[0] >= 'a' && str[0] <- 'z')
		str[0] -= 32;	
        count = 1;
        while (str[count] != '\0')
        {
                if (((str[count] >= 'a' && str[count] <= 'z') ||
					(str[count] >= 'A' && str[count] <= 'Z')) && (str[count - 1] < '0' ||
					(str[count - 1] > '9' && str[count - 1] < 'A') ||
					(str[count - 1] > 'Z' && str[count - 1] < 'a') ||
					str[count - 1] > 'z'))
                {
                        if (str[count] >= 'a' && str[count] <= 'z')
				str[count] -= 32;
                }
                else if (str[count] >= 'A' && str[count] <= 'Z')
			str[count] += 32;
		count++;
        }
        return (str);
}

int main(void)
{
        char src[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
        char *result;

        printf("lowercase:\n");
        printf("%s\n", src);
        result = ft_strcapitalize(src);
        printf("uppercase:\n");
        printf("%s\n", src);
}
