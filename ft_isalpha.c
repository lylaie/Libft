/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: audumont <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 10:04:13 by audumont          #+#    #+#             */
/*   Updated: 2019/10/07 10:29:04 by audumont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int nb)
{
	if ((nb < 65 || nb > 90) && (nb < 97 || nb > 122))
		return (0);
	return (1);
}
