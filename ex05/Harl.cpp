/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mg <mg@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 11:45:06 by mg                #+#    #+#             */
/*   Updated: 2025/10/17 14:20:32 by mg               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Harl.hpp"

void	Harl::debug(void) {
	std::cout << " [DEBUG] I can't debug helppppp me..." << std::endl;
}


void	Harl::info(void) {
	std::cout << " [INFO] I have a cat..." << std::endl;
}


void	Harl::warning(void) {
	std::cout << " [WARNING] Be carefull boby..." << std::endl;
}


void	Harl::error(void) {
	std::cout << " [ERROR] Too late..." << std::endl;
}

void	Harl::complain(std::string level) {
	
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	HarlFt actions[4] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	
	for (int i = 0; i < 4; i++) {
		if (levels[i] == level) {
			(this->*actions[i])();
			return;
		}
	}
}