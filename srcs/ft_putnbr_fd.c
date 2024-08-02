/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lantonio <lantonio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 08:40:10 by lantonio          #+#    #+#             */
/*   Updated: 2024/05/18 11:21:13 by lantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
		ft_putstr_fd("-2147483648", fd);
	else if (n < 0)
	{
		ft_putchar_fd('-', fd);
		ft_putnbr_fd(-n, fd);
	}
	else if (n >= 10)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putchar_fd(n % 10 + '0', fd);
	}
	else
		ft_putchar_fd(n + '0', fd);
}

/*int	main(void)
{
	int	fd = creat("file.txt", 777);
	ft_putnbr_fd(123, fd);
	ft_putchar_fd('\n', fd);
	ft_putnbr_fd(-123, fd);
	ft_putchar_fd('\n', fd);
	ft_putnbr_fd(123456789, fd);
	ft_putchar_fd('\n', fd);
}*/