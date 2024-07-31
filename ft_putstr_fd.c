/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lantonio <lantonio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 08:22:05 by lantonio          #+#    #+#             */
/*   Updated: 2024/05/17 08:30:13 by lantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = -1;
	while (s[++i])
		ft_putchar_fd(s[i], fd);
}

/*int	main(void)
{
	int		fd = creat("file.txt", 777);
	char	s[] = "Olá, meu nome é LouAntonio";
	if (fd)
		ft_putstr_fd(s, fd);
	else
		write(1, "Error while creating file, try again!", 37);
}*/