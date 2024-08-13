/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjamil <mjamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 16:26:21 by mjamil            #+#    #+#             */
/*   Updated: 2024/07/27 16:26:23 by mjamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimmed_str;
	size_t	start;
	size_t	end;

	start = 0;
	end = ft_strlen(s1) - 1;
	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	while (s1[start] && ft_strchr(set, s1[start]))
		++start;
	while (s1[end] && ft_strchr(set, s1[end]))
		--end;
	if (start > end)
		return (ft_strdup(""));
	trimmed_str = ft_substr(s1, start, end - start + 1);
	return (trimmed_str);
}
/*
int main(void)
{
    char const *s1 = "   Hello, world!   ";
    char const *set = "H ";

    char *trimmed_str = ft_strtrim(s1, set);
    if (trimmed_str)
    {
        printf("Original string: \"%s\"\n", s1);
        printf("Set: \"%s\"\n", set);
        printf("Trimmed string: \"%s\"\n", trimmed_str);
        free(trimmed_str); // Remember to free the allocated memory
    }
    else
    {
        printf("Memory allocation failed.\n");
    }

    return 0;
}
*/
