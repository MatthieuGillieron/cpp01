/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mg <mg@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 10:26:38 by mg                #+#    #+#             */
/*   Updated: 2025/10/01 10:56:59 by mg               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include <iostream>

Weapon::Weapon(std::string type) : type(type) {}
Weapon::~Weapon() {}


const std::string&	Weapon::getType() const {
	return type;
}

void	Weapon::setType(std::string newType) {
	type = newType;
}