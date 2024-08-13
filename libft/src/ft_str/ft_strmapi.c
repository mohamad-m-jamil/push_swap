/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjamil <mjamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 16:25:53 by mjamil            #+#    #+#             */
/*   Updated: 2024/07/27 16:25:54 by mjamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*newstring;
	size_t	len;
	size_t	i;

	i = 0;
	if (!s)
		return (ft_strdup(""));
	len = ft_strlen(s);
	newstring = (char *)malloc(sizeof(char) * (len + 1));
	if (!newstring)
		return (NULL);
	while (i < len)
	{
		newstring[i] = (*f)(i, s[i]);
		++i;
	}
	newstring[i] = 0;
	return (newstring);
}
