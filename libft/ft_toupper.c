/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcamila <mcamila@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 17:42:27 by mcamila           #+#    #+#             */
/*   Updated: 2019/09/18 17:50:17 by mcamila          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_islower(char c)
{
	return (((unsigned char)c >= 'a') && ((unsigned char)c <= 'z'));
}

int			ft_toupper(int c)
{
	if (c >= -128 && c <= 127)
	{
		if (ft_islower(c))
			return (c - 32);
	}
	return (c);
}
