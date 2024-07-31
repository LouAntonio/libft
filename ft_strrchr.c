/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lantonio <lantonio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 09:17:46 by lantonio          #+#    #+#             */
/*   Updated: 2024/05/18 11:09:25 by lantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)(s + i));
		i--;
	}
	return (NULL);
}

/*int	main(void)
{
	char	s1[] = "LouAntonio";
	char	c = 'n';
	char	*r1 = ft_strrchr(s1, c);
	char	*r2 = strrchr(s1, c);
	printf("%s\n", r1);
	printf("%s\n", r2);
}*/