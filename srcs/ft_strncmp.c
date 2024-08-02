/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lantonio <lantonio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 09:33:54 by lantonio          #+#    #+#             */
/*   Updated: 2024/05/18 10:56:30 by lantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	if (!n)
		return (0);
	i = 0;
	while (i < (n - 1) && s1[i] == s2[i] && s1[i] && s2[i])
		i++;
	return ((int)((unsigned char)s1[i] - (unsigned char)s2[i]));
}

/*int	main(void)
{
	char	s1[] = "Lourenço";
	char	s2[] = "Lourenço";
	int		r1 = ft_strncmp(s1, s2, 2);
	int		r2 = strncmp(s1, s2, 2);
	printf("%d\n%d", r1, r2);
}*/