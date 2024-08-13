/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjamil <mjamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 16:26:11 by mjamil            #+#    #+#             */
/*   Updated: 2024/07/27 16:26:12 by mjamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;

	if (!big && !len)
		return (NULL);
	if (!*little)
		return ((char *)big);
	while (*big && len--)
	{
		i = 0;
		while (*(big + i) == *(little + i) && *(little + i) && i <= len)
		{
			if (!*(little + i + 1))
				return ((char *)big);
			i++;
		}
		big++;
	}
	return (NULL);
}
/*
int main() {
    const char *big = "Hello, world!";
    const char *little = "world";
    size_t len = strlen(big); 
    // Using ft_strnstr
    char *result_ft_strnstr = ft_strnstr(big, little, len);
    if (result_ft_strnstr != NULL) {
        printf("'%s' found at position: %ld\n", little, result_ft_strnstr - big);
    } else {
        printf("'%s' not found\n", little);
    }
    return 0;
}
*/
