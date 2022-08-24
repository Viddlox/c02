/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcheng <mcheng@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 18:30:08 by mcheng            #+#    #+#             */
/*   Updated: 2022/08/24 23:21:43 by mcheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	a;

	a = 0;
	while (src[a] != '\0')
	{
		dest[a] = src[a];
		a++;
	}
	dest[a] = '\0';
	return (dest);
}

int	main(void)
{
	char *src;
	char dest[12];

	src = "Hello World";
	printf("source   : %s\n", src);
	strcpy(dest, src);
	printf("copy    : %s\n", dest);
	ft_strcpy(dest, src);
	printf("ft_cpy : %s\n", dest);
}
