/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lantonio <lantonio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 10:46:32 by lantonio          #+#    #+#             */
/*   Updated: 2024/05/18 10:26:53 by lantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = -1;
	while (++i < n)
	{
		if (*(unsigned char *)(s + i) == (unsigned char)c)
			return ((void *)(s + i));
	}
	return (NULL);
}

/*int	main(void)
{
	char 	s[] = "Hello, World!";
	char	*res = ft_memchr(s, '*', ft_strlen(s));
	char	*res2 = memchr(s, '*', ft_strlen(s));
	printf("%s\n", res);
	printf("%s\n", res2);
}*/