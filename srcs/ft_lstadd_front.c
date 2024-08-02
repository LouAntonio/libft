/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lantonio <lantonio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 11:57:43 by lantonio          #+#    #+#             */
/*   Updated: 2024/05/19 08:05:11 by lantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst && new)
	{
		new->next = *lst;
		*lst = new;
	}
}

/*int	main(void)
{
	t_list **novo;
	t_list *n;
	novo = (t_list **)malloc(sizeof(t_list) + 1);
	*novo = ft_lstnew("Ângelo");

	t_list *new;
	new = (t_list *)malloc(sizeof(t_list) + 1);
	new = ft_lstnew("LouAntonio");
	ft_lstadd_front(novo, new);
	n = (t_list *)malloc(sizeof(t_list) + 1);
	n = *novo;
	while (n)
	{
		printf("%s\n", (char *)n->content);
		n = n->next;
	}
	return (0);
}
*/