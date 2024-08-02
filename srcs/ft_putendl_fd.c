/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lantonio <lantonio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 08:33:11 by lantonio          #+#    #+#             */
/*   Updated: 2024/05/17 08:36:00 by lantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}

/*int	main(void)
{
	int		fd = creat("file.txt", 777);
	char	s[] = "Olá, meu nome é LouAntonio";
	if (fd)
		ft_putendl_fd(s, fd);
	else
		write(1, "Error while creating file, try again!", 37);
}*/