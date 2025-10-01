/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mg <mg@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 10:26:34 by mg                #+#    #+#             */
/*   Updated: 2025/10/01 11:04:42 by mg               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"
#include <iostream>


int main () {

	Weapon club("big club");
	HumanA Jerem("jerem", club);

	Jerem.attack();
	club.setType("Gun");
	Jerem.attack();
	return 0;
}