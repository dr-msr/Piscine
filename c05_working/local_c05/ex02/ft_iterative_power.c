/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahim <mrahim@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 12:34:32 by mrahim            #+#    #+#             */
/*   Updated: 2023/09/21 13:02:58 by mrahim           ###   ########.KL       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int result;
	
	result = 1;
	while (power != 0)
	{
		result = result * nb;
		power--;
	}
	return (result);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%d\n",ft_iterative_power(3,3));
			return (0);
}*/
