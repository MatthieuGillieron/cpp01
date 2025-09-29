/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mg <mg@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 14:22:03 by mg                #+#    #+#             */
/*   Updated: 2025/09/29 15:14:50 by mg               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main () {
	Zombie nothing;
	Zombie name;

	nothing.announce();
	name.setName("[custom name]");
	name.announce();



Zombie* horde = zombieHorde(3, "[Zomblar]");

for (int i = 0; i < 3; i++)
	horde[i].announce();

delete[] horde;

	return 0;
}