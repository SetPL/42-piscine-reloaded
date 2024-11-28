/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apieniak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 13:54:12 by apieniak          #+#    #+#             */
/*   Updated: 2024/11/28 15:30:41 by apieniak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int	main(int argc, char *argv[])
{
	int	i;
	int	j;

	if (argc >= 1)
	{
		i = 1;
		j = 0;
		while (i < argc)
		{
			while (argv[i][j])
			{
				write(1, &argv[i][j], 1);
				j++;
			}
			ft_putchar('\n');
			i++;
			j = 0;
		}
	}
	return (0);
}
