/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjustine <mjustine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 15:07:29 by mjustine          #+#    #+#             */
/*   Updated: 2025/04/30 15:01:04 by mjustine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && s1[i] == s2[i] && (s1[i] || s2[i]))
	{
		i++;
	}
	if (i == n)
		return (0);
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
