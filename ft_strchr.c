/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: audumont <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 13:04:30 by audumont          #+#    #+#             */
/*   Updated: 2019/10/07 15:19:07 by audumont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *str, char to_find)
{
	char *copy;

	copy = (char*)str;
	while (copy != '\0')
	{
		if (*copy == to_find)
			return (copy);
		copy++;
	}
	return (0);
}
