/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 21:49:22 by marvin            #+#    #+#             */
/*   Updated: 2021/04/12 21:49:22 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *ft_memcpy (void *destination, const void *source, size_t n)
{
    int i;

    i = 0;
    if (!destination)
        return (NULL);
    while (i < 4)
    {
        ((char*)destination)[i] = ((char*)source)[i];
        i++;
    }
    //((char*)destination)[i] - '\0';
    return (destination);
}
