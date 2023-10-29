/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majrou <majrou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 16:55:02 by majrou            #+#    #+#             */
/*   Updated: 2023/10/29 22:52:58 by majrou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void	print_map(char **map)
{
	int	i;

	i = 0;
	while (map[i])
	{
		printf ("%s\n", map[i]);
		i++;
	}
}


int	main(int ac, char **av)
{
	char	**map;
	t_texteur *tex;

	if (ac == 2)
	{
			map = read_map(av[1]);
			remove_newlines(map);
			check_map(map, check_elements(map));
			check_duplcit(map);
			get_color(map);
			tex = get_tex(map);
			check_duplcit(map);
			print_map(map);
			ray_main(ac, av ,map, tex);
	}
	else
	{
		printf("Error: Where is map\n");
		exit(0);
	}
	return (0);

}
