/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lantonio <lantonio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 09:06:10 by lantonio          #+#    #+#             */
/*   Updated: 2024/05/17 10:09:31 by lantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*newstr;

	newstr = (char *)malloc((ft_strlen(s1) + ft_strlen(s2) + 1));
	i = -1;
	j = -1;
	if (newstr == NULL)
		return (NULL);
	while (s1[++i] != '\0')
		newstr[i] = s1[i];
	while (s2[++j] != '\0')
		newstr[i++] = s2[j];
	newstr[i] = '\0';
	return (newstr);
}

/*int	main(void)
{
	char	s1[] = "Ola, meu nome ";
	char	s2[] = "e LouAntonio";
	printf("%s\n", ft_strjoin(s1, s2));
}*/