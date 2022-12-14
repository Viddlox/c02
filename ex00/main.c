/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcheng <mcheng@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 18:30:08 by mcheng            #+#    #+#             */
/*   Updated: 2022/08/25 08:42:19 by mcheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	count;

	count = 0;
	while (src[count] != '\0')
	{
		dest[count] = src[count];
		count++;
	}
	dest[count] = '\0';
	return (dest);
}

int	main(void)
{
	char dest[] = "Destination hello";
	char src[] = "Hello World";
	char *result;

	printf("Test before copying:\n");
	printf("source: %s\n", src);
	printf("destination: %s\n", dest);
	result = ft_strcpy(dest, src);

	printf("Test after copying:\n");
	printf("source: %s\n", src);
	printf("destination: %s\n", dest);
}
