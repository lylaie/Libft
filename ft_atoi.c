/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: audumont <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 13:52:11 by audumont          #+#    #+#             */
/*   Updated: 2019/10/07 14:53:32 by audumont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int index;
	int sign;
	int result;

	index = 0;
	sign = 1;
	result = 0;
	while (str[index] == '\t' || str[index] == '\n' || str[index] == '\r' ||
			str[index] == '\v' || str[index] == '\f' || str[index] == ' ')
		index++;
	if (str[index] == '+' || str[index] == '-')
	{
		if (str[index] == '-')
			sign = -sign;
		index++;
	}
	while (str[index] <= '9' && str[index] >= '0')
	{
		result = result * 10 + (str[index] - '0');
		index++;
	}
	return (result * sign);
}
