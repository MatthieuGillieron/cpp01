/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mg <mg@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 10:26:27 by mg                #+#    #+#             */
/*   Updated: 2025/10/02 16:23:17 by mg               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string name) : name(name), weapon(NULL) {}
HumanB::~HumanB() {}


void	HumanB::attack() {
	if (!weapon)
		std::cout << name << " has no weapon" << std::endl;

	else {
		std::cout << name << " attack with their " << weapon->getType() << std::endl;
	}
}

void	HumanB::setWeapon(Weapon& weapon) {

	this->weapon = &weapon;
}