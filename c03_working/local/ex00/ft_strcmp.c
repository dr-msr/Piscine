/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahim <mrahim@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 09:36:32 by mrahim            #+#    #+#             */
/*   Updated: 2023/09/19 14:22:54 by mrahim           ###   ########.KL       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	diff;

	i = 0;
	diff = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		diff = s1[i] - s2[i];
		if (diff == 0)
		{
			i++;
		}
		else
		{
			return (diff);
		}
	}
	return (0);
}

/* int	main()
{

//	Compare a with b, lexicographically. If a > b, returns the positive value.

	char *a = "Test";
	char *b = "";
	
	printf("%d\n",strcmp(a,b));
	printf("%d",ft_strcmp(a,b));
	return (0);
}*/
