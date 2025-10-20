/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mg <mg@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 10:26:34 by mg                #+#    #+#             */
/*   Updated: 2025/10/20 14:50:28 by mg               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"
#include <iostream>


int main (int ac, char **av) {

	(void)av;

	if (ac == 1) {

		
		HumanB frank("Frank");
		frank.attack();
		
		Weapon club("big club");
		
		HumanA bob("bob", club);
		bob.attack();
		
		frank.setWeapon(club);
		frank.attack();
		
		club.setType("Gun");
		
		bob.attack();
		frank.attack();
		
		return 0;
	}
	std::cout << "Write: ./exec" << std::endl;
	return 1;
}