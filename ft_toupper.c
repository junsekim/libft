/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junsekim <junsekim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/25 21:15:07 by junsekim          #+#    #+#             */
/*   Updated: 2020/12/26 19:29:36 by junsekim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{

	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}