/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mg <mg@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 10:38:42 by mg                #+#    #+#             */
/*   Updated: 2025/10/20 14:43:17 by mg               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main (int ac, char **av) {
	
	(void)av;
	
	if (ac == 1) {

		Zombie *heapZombie = newZombie("heapZ");
		heapZombie->announce();
		delete heapZombie;
		
		randomChump("stackZ");
		return 0;
	}
	std::cout << "write: ./exec" << std::endl;
	return 1;
}