/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 09:02:04 by ccazuc            #+#    #+#             */
/*   Updated: 2017/11/07 18:28:15 by ccazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

/*t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list		*result;

	if (!(result = malloc(sizeof(*result))))
		return (NULL);
	if (content && content_size > 0)
	{
		if (!(result->content = malloc(content_size)))
			return (NULL);
		ft_memcpy(result->content, content, content_size);	
		result->content_size = content_size;
	}
	else
	{
		result->content = NULL;
		result->content_size = 0;
	}
	result->next = NULL;
	return (result);
}*/
t_list    *ft_lstnew(void const *content, size_t content_size)
{
    t_list    *new;
    void    *temp;

    if ((new = (t_list *)malloc(sizeof(t_list))) == NULL)
        return (NULL);
    if (content == NULL)
    {
        new->content = NULL;
        new->content_size = 0;
        new->next = NULL;
        return (new);
    }
    else
    {
        if ((temp = (void *)malloc(content_size)) == NULL)
            return (NULL);
        ft_memcpy(temp, content, content_size);
        new->content = temp;
        new->content_size = content_size;
        new->next = NULL;
        return (new);
    }
}
