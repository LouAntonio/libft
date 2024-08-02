/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lantonio <lantonio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 08:51:53 by lantonio          #+#    #+#             */
/*   Updated: 2024/05/18 10:31:57 by lantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = -1;
	while (s[++i] != '\0')
	{
		if ((char)s[i] == (char)c)
			return ((char *)(s + i));
	}
	if (s[i] == c)
		return ((char *)(s + i));
	return (NULL);
}

/*int	main(void)
{
	char	s[] = "LouAntonio";
	char	c = 'A';
	char	*result;
	char	*result2;

	result = ft_strchr(s, c);
	result2 = strchr(s, c);
	if (result) {
        printf("Caractere '%c' encontrado em: %s\n", c, result);
        printf("Caractere '%c' encontrado em: %s\n", c, result2);
    } else {
        printf("Caractere '%c' não encontrado.\n", c);
    }
}*/