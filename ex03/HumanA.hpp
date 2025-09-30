
#include <iostream>
#include "Weapon.hpp"

#ifndef HUAMANA_HPP
#define HUAMANA_HPP



class HumanA {
	
	private:

	std::string	name;
	Weapon& weapon;


	

	public:
	HumanA(std::string name, Weapon& weapon);
	~HumanA();

	void	attack();
};


#endif