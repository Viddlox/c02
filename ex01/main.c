/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcheng <mcheng@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 08:46:19 by mcheng            #+#    #+#             */
/*   Updated: 2022/08/25 09:45:42 by mcheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	count;
	count = 0;
	while (src[count] != '\0' && count < n)
	{
		dest[count] = src[count];
		count++;
	}
	while (count < n)
	{
		dest[count] = '\0';
		count++;
	}
	return (dest);
}

int     main(void)
{
        char dest[] = "tomato";
        char src[] = "potato";
        char *result;
	int	size;
	size = 6;

        printf("Test before copying:\n");
        printf("source: %s\n", src);
        printf("destination: %s\n", dest);
	printf("size: %d\n", size);
        result = ft_strncpy(dest, src, size);
        printf("Test after copying:\n");
        printf("source: %s\n", src);
        printf("destination: %s\n", dest);
	printf("size: %d\n", size);
}
