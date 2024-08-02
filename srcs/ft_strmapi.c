/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lantonio <lantonio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 16:21:36 by lantonio          #+#    #+#             */
/*   Updated: 2024/05/18 08:57:02 by lantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*char	f(unsigned int j, char c)
{
	(void)j;
	return (c);
}
*/
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	size_t			i;
	unsigned int	j;

	i = 0;
	j = 0;
	str = (char *)malloc(ft_strlen(s) + 1);
	if (str == NULL)
		return (NULL);
	while (i < ft_strlen(s))
	{
		str[i] = f(j, (char)s[i]);
		i++;
		j++;
	}
	str[i] = '\0';
	return (str);
}

/*int	main(void)
{
	char	s[] = "esta e a minha string";
	printf("%s\n", ft_strmapi(s, f));
}*/