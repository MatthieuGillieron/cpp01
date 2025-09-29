/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mg <mg@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 10:38:42 by mg                #+#    #+#             */
/*   Updated: 2025/09/29 10:42:45 by mg               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main () {
	
	Zombie *heapZombie = newZombie("heapZ");
	heapZombie->announce();
	delete heapZombie;

	randomChump("stackZ");
	return 0;
}