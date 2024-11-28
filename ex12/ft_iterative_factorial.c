/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apieniak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 15:27:12 by apieniak          #+#    #+#             */
/*   Updated: 2024/11/28 15:28:30 by apieniak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	iterative_factorial(int nb)
{
	int	num;

	num = 1;
	if (nb < 0)
		return (0);
	if (nb == 1 || nb == 0)
		return (1);
	while (nb > 1)
	{
		num *= nb;
		nb--;
	}
	return (num);
}
