/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maelgini <maelgini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 17:16:17 by maelgini          #+#    #+#             */
/*   Updated: 2024/11/04 17:17:47 by maelgini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_swap(char **a, char **b)
{
	char	*c;

	c = *a;
	*a = *b;
	*b = c;
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s1[i] && s2[j])
	{
		if (s1[i] != s2[j])
		{
			break ;
		}
		i++;
		j++;
	}
	return (s1[i] - s2[j]);
}

int	main(int ac, char **av)
{
	int	i;
	int	j;

	j = 1;
	while (j < ac -1)
	{
		i = 1;
		while (i < ac - 1)
		{	
			if (ft_strcmp(av[i], av[i + 1]) > 0)
				ft_swap(&av[i], &av[i + 1]);
			i++;
		}
		j++;
	}
	i = 1;
	while (i <= ac - 1)
	{
		ft_putstr(av[i]);
		ft_putchar('\n');
		i++;
	}
	return (0);
}
