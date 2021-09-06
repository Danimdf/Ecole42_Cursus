/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmonteir <dmonteir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 16:03:44 by dmonteir          #+#    #+#             */
/*   Updated: 2021/09/05 23:35:50 by dmonteir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	main(int argc, char **argv)
{

	char	**map;

	if (argc != 2)
	{
		printf("Error! broe\n");
		exit(1);
	}

	map = this_Read(argv[1]);
	if (!valid_Map(map))
	{
		printf("Erro!Mapa não válido!");
		exit (1);
	}

}
