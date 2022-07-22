/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperrin <lperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 16:54:20 by lperrin           #+#    #+#             */
/*   Updated: 2022/04/27 12:55:55 by lperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_str(char const *s, char c)
{
	int	i;
	int	flag;
	int	count;

	i = 0;
	count = 0;
	flag = 0;
	while (s[i])
	{
		if (s[i] != c)
			flag = 1;
		if ((s[i] == c || s[i + 1] == '\0') && flag == 1)
		{
			flag = 0;
			count++;
		}
		i++;
	}
	return (count);
}

static char	*save_word(char const *s, char c)
{
	char	*words;
	int		i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	words = (char *)malloc(sizeof(char) * (i + 1));
	if (!words)
		return (NULL);
	i = 0;
	while (s[i] && s[i] != c)
	{
		words[i] = s[i];
		i++;
	}
	words[i] = '\0';
	return (words);
}

char	**ft_split(char const *s, char c)
{
	int		nbr_of_words;
	char	**splitted;
	int		i;

	if (!s)
		return (NULL);
	nbr_of_words = count_str(s, c);
	splitted = (char **)malloc(sizeof(char *) * (nbr_of_words + 1));
	if (!splitted)
		return (NULL);
	i = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s && *s != c)
		{
			splitted[i] = save_word(s, c);
			i++;
			while (*s && *s != c)
				s++;
		}
	}
	splitted[i] = 0;
	return (splitted);
}

/* int	main(void)
{
	char	c;
	int		pos;
	char	**res;

	char	t[]= "      split       this for   me  !      ";
	
	c = ' ';
	pos = 0;
	res = ft_split(t, c);
	while (pos != count_str(t, c))
	{
		printf("res(%d) = %s\n", pos, res[pos]);
		pos++;
	}
	return (0);
}
 */