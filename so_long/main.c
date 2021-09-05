/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmonteir <dmonteir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 16:03:44 by dmonteir          #+#    #+#             */
/*   Updated: 2021/09/05 16:25:53 by dmonteir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	main(int argc, char **argv)
{

	int check;
	//char **map;

	if (argc != 2)
	{
		printf("Error! broe\n");
		//exit(1);
	}
	check = check_File(argv[1], "ber");

	if (check == 1)
	{
		printf("Error1000\n");
		//exit(1);
	}

	this_Read(argv[1]);


}
