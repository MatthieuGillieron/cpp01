/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mg <mg@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 16:10:11 by mg                #+#    #+#             */
/*   Updated: 2025/10/20 14:48:35 by mg               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main (int ac, char **av) {

	(void)av;
	
	if (ac == 1) {

		std::string var("HI THIS IS BRAIN");
		std::string* stringPTR = &var;
		std::string& stringREF = var;
		
		std::cout << "adress var: " << &var << std::endl ;
		std::cout << "adress stringPTR: " << &stringPTR << std::endl ;
		std::cout << "adress stringREF: " << &stringREF << std::endl ;
		
		
		std::cout << "value var: " << var << std::endl ;
		std::cout << "value stringPTR: " << *stringPTR << std::endl ;
		std::cout << "value stringREF: " << stringREF << std::endl ;
		
		return 0;
	}
	std::cout << "Write: ./exec" << std::endl;
	return 1;
}


/*

+----------------------+      +-------------------+
|      var             |      |   stringPTR       |
| "HI THIS IS BRAIN"   |      | 0x1000            |	
| @ adresse 0x1000     |      | @ adresse 0x2000  |
+----------------------+      +-------------------+
           ^
           |
+-------------------+
|   stringREF       |  (alias, pas une vraie nouvelle case mémoire)
| réfère var @0x1000|	(modifie stirngREF -> sa modifie var)
+-------------------+


*/