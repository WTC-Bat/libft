/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itobase.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvanwyk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/03 14:41:32 by mvanwyk           #+#    #+#             */
/*   Updated: 2016/06/03 14:43:00 by mvanwyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_itobase(int n, int base)
{
    char    basechars[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char    *baseout;
	char	*tmp;
    int     rem;
	int 	cnt;
    int     i;
    
    rem = n;
	cnt = 0;
	i = 0;
    baseout = (char *)malloc(sizeof(char) * 64);
	tmp = (char *)malloc(sizeof(baseout));
    while (rem > 0)
    {
        i = rem % base;
        rem = rem / base;
		baseout[cnt] = basechars[i];
		cnt++;
    }
	tmp = ft_strrev(baseout);
	tmp[cnt] = '\0';
	return (tmp);
    //return (ft_strrev(baseout));
}
