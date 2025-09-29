/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mg <mg@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/27 11:07:22 by mg                #+#    #+#             */
/*   Updated: 2025/09/29 10:19:25 by mg               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>


Zombie::Zombie(std::string name) : name(name) {}
Zombie::~Zombie(void) {

	std::cout << "Zombie" << name << " is destroyed" << std::endl;
}

void	Zombie::announce() {

	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

