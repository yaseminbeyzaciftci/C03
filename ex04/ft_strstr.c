/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaciftci <yaciftci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 17:48:15 by yaciftci          #+#    #+#             */
/*   Updated: 2024/07/10 13:43:17 by yaciftci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *str2)
{
	int		i;
	char	*temp;

	temp = str;
	if (*str2 == '\0')
		return (str);
	while (*temp)
	{
		i = 0;
		if (*temp == str2[0])
		{
			while (temp[i] == str2[i] && str2[i])
				i++;
			if (str2[i] == '\0')
				return (temp);
		}
		temp++;
	}
	return (0);
}
