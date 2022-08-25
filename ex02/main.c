/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcheng <mcheng@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 09:47:01 by mcheng            #+#    #+#             */
/*   Updated: 2022/08/25 10:24:25 by mcheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>

int ft_str_is_alpha(char *str)
{
	int	alpha;
	int	count;
	
	count = 0;
	while (str[count] != '\0')
	{
		if (str[count] < 'A' || str[count] > 'Z' && str[count] < 'a' || str[count] > 'z')
		{
			alpha = 0;
			count++;
		}
		else
		{
			alpha = 1;
			count++;
		}
	}
	return (alpha);
}

int main(void)
{
	char str_valid[] = "ILOVEYOU, iloveyou";
	char str_invalid[] = "1l0v3y04";
	
	printf("ILOVEYOU, iloveyou\n");
	printf("valid: %d\n", ft_str_is_alpha(str_valid));
	printf("1l0v3y04\n");
	printf("invalid: %d\n", ft_str_is_alpha(str_invalid));
}
		
