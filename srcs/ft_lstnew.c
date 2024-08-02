/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lantonio <lantonio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 12:37:00 by lantonio          #+#    #+#             */
/*   Updated: 2024/05/18 11:55:20 by lantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*elt;

	elt = (t_list *)malloc(sizeof(t_list));
	if (!elt)
		return (NULL);
	elt->content = content;
	elt->next = NULL;
	return (elt);
}

/*int	main()
{
    int data = 5;
    char	str[] = "Ângelo";
    t_list *node = ft_lstnew(&data);

    if(node != NULL)
        printf("Data: %d\n", *(int*)node->content);

    node = ft_lstnew(&str);
    if(node != NULL)
        printf("Data: %s\n", (char*)node->content);
    free(node);
    return (0);
}*/