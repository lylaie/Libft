/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: audumont <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 10:50:51 by audumont          #+#    #+#             */
/*   Updated: 2019/10/07 10:52:41 by audumont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int nb)
{
	if (nb < 32 || nb > 132)
	{
		return (0);
	}
	return (1);
}
