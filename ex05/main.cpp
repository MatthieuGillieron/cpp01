/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mg <mg@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 11:45:21 by mg                #+#    #+#             */
/*   Updated: 2025/10/20 12:09:40 by mg               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <string>
#include <iostream>

int main(int ac, char **av) {
	
	if (ac != 2)
	{
		std::cout << "enter -> ./harl <flag>" << std::endl;
		return 1;
	}
	
	Harl harl;
	harl.complain(av[1]);

	return 0;
}