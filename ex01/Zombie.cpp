/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mg <mg@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 14:03:58 by mg                #+#    #+#             */
/*   Updated: 2025/09/29 14:57:50 by mg               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(void) : name("unamed") {}
Zombie::Zombie(std::string name) : name(name) {}

Zombie::~Zombie() { 
	std::cout << "Zombie " << name << " is destroyed" << std::endl;
}



void	Zombie::setName(std::string name) {

	this->name = name;
}


void	Zombie::announce(void) {
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
