/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperrin <lperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 15:50:57 by lperrin           #+#    #+#             */
/*   Updated: 2022/04/26 16:39:47 by lperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trim;
	size_t	i;

	if (!s1 || !set)
		return (NULL);
	while (*s1 != 0 && ft_strchr(set, *s1))
		s1++;
	i = ft_strlen(s1);
	while (i != 0 && ft_strchr(set, s1[i]))
		i--;
	trim = ft_substr(s1, 0, i + 1);
	return (trim);
}

/* char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (to_find[0] == '\0')
		return ((char *)str);
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] == to_find[j] && str[i + j] != '\0')
		{
			if (to_find[j + 1] == '\0')
				return ((char *)&str[i]);
			j++;
		}
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*x;
	char	*y;
	char	*rslt;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	rslt = malloc((ft_strlen((char *)s1) - ft_strlen(set)) * sizeof(char *));
	x = malloc((ft_strlen(ft_strstr((char *)s1, (char *)set)))
			* sizeof(char *));
	if (!rslt)
		return (NULL);
	if (ft_strstr((char *)s1, (char *)set) != 0)
	{
		while ((char)s1[i] != '\0' && i < ft_strlen((char *)s1)
			- ft_strlen(ft_strstr((char *)s1, (char *)set)))
		{
			x[j] = s1[i];
			j++;
			i++;
		}
		y = ft_strstr((char *)s1, (char *)set) + ft_strlen((char *)set);
		rslt = ft_strjoin(x, y);
		return (rslt);
	}
	return (0);
}

int	main(void)
{
	char	s1[23];
	char	set[5];

	s1[23] = "I am lost in the sauce";
	set[5] = "lost";
	printf("%s\n", ft_strtrim(s1, set));
	return (0);
}
 */