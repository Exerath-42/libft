/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 01:18:49 by marvin            #+#    #+#             */
/*   Updated: 2021/04/12 01:18:49 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void *ft_memset(void *buf, int c, size_t n)
{

    if(!buf)
        return (NULL);
    while (n > 0)
    {
        n--;
        ((unsigned char *)buf)[n] = (unsigned char)c;
    }
    return (buf);
}


