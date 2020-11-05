/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcamila <mcamila@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 17:50:31 by mcamila           #+#    #+#             */
/*   Updated: 2019/09/18 17:50:45 by mcamila          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isupper(char c)
{
	return (c >= 'A' && c <= 'Z');
}

int			ft_tolower(int c)
{
	if (c >= -128 && c <= 127)
	{
		if (ft_isupper(c))
			return (c + 32);
	}
	return (c);
}
