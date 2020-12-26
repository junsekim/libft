/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junsekim <junsekim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/25 19:35:15 by junsekim          #+#    #+#             */
/*   Updated: 2020/12/26 12:13:00 by junsekim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	char	*ret;
	int		i;

	ret = 0;
	i = 0;
	while (i == 0 || s[i-1])
	{
		if (s[i] == (char)c)
			ret = (char*)&s[i];
		i++;
	}
	return (ret);
}