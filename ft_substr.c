/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkaddour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 17:13:36 by hkaddour          #+#    #+#             */
/*   Updated: 2021/12/01 10:17:42 by hkaddour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t n)
{
	size_t	i;
	int		st_n;
	char	*str;
	char	*ptr;

	i = 0;
	st_n = start;
	str = (char *) s;
	if (!s)
		return (NULL);
	if (start >= ft_strlen(str))
		return (ft_strdup(""));
	while (str[start++] && i < n)
		i++;
	ptr = (char *) malloc(sizeof(char) * (i + 1));
	if (!ptr)
		return (NULL);
	i = 0;
	while (str[st_n] && i < n)
	{
		ptr[i++] = str[st_n++];
	}
	ptr[i] = '\0';
	return (ptr);
}
