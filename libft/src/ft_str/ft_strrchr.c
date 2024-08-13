/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjamil <mjamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 16:26:16 by mjamil            #+#    #+#             */
/*   Updated: 2024/07/27 16:26:18 by mjamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int				i;
	unsigned char	ch;

	ch = c;
	i = 0;
	while (s[i] != '\0')
		i++;
	while (i >= 0)
	{
		if (s[i] == ch)
			return ((char *)s + i);
		i--;
	}
	return (NULL);
}
/*
int main() {
    const char *str = "Hello, world!";
    int character = '4'; // Character to search for

    char *result = ft_strrchr(str, character);

    if (result != NULL) {
        printf("Found '%c' at position: %ld\n", character, result - str);
    } else {
        printf("Character '%c' not found\n", character);
    }

    return 0;
}
*/
