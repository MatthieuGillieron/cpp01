/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mg <mg@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 14:22:03 by mg                #+#    #+#             */
/*   Updated: 2025/10/20 14:46:56 by mg               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main (int ac, char **av) {

	(void)av;
	
	if (ac == 1) {

		Zombie nothing;
		Zombie name;
		
		nothing.announce();
		name.setName("[custom name]");
		name.announce();
		
		
		
		Zombie* horde = zombieHorde(3, "[Zomblar]");
		
		for (int i = 0; i < 3; i++)
		horde[i].announce();
		
		delete[] horde;
		
		return 0;
	}

	std::cout << "Write: ./exec" << std::endl;
	return 1;
}