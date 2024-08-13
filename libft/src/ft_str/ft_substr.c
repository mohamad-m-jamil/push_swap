/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjamil <mjamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 16:26:26 by mjamil            #+#    #+#             */
/*   Updated: 2024/07/27 16:26:28 by mjamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	sizeofsub;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	sizeofsub = ft_strlen(s + start);
	if (sizeofsub < len)
		len = sizeofsub;
	sub = (char *)malloc(sizeof(char) * (len + 1));
	if (!sub)
		return (NULL);
	ft_strlcpy(sub, s + start, len + 1);
	return (sub);
}
/*
int main(void) {
    char const *s = "Hello, world!";
    unsigned int start = 7; // Index to start the substring
    size_t len = 5; // Length of the substring

    // Test ft_substr function
    char *substring = ft_substr(s, start, len);

    // Print the result
    if (substring) {
        printf("Substring: %s\n", substring);
        free(substring); // Free allocated memory
    } else {
        printf("Error: Substring is NULL\n");
    }

    return 0;
}
*/
