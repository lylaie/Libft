/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: audumont <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 15:20:20 by audumont          #+#    #+#             */
/*   Updated: 2019/10/07 15:29:54 by audumont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char		*ft_strrchr(const char *str, char to_find)
{
	int		len;
	int		index;
	char	*copy;

	len = 0;
	index = 0;
	copy = (char*)str;
	while (str[len] != '\0')
		len++;
	while (index != len)
	{
		if (copy[len - index] == to_find)
			return (copy + (len - index));
		index++;
	}
	return (0);
}
