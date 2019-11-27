/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xvan-ham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 14:29:59 by xvan-ham          #+#    #+#             */
/*   Updated: 2019/11/05 15:42:20 by xvan-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(const char *string)
{
	int	sign;
	int	total;

	sign = 1;
	total = 0;
	while (*string == 32 || (*string > 8 && *string < 14))
		string++;
	if (*string == '-')
		sign *= -1;
	if (*string == '-' || *string == '+')
		string++;
	while (*string && *string >= 48 && *string <= 57)
		total = total * 10 + (*(string++) - '0');
	return (total * sign);
}
