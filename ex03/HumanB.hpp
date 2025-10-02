
#include <iostream>
#include "Weapon.hpp"


#ifndef HUAMANB_HPP
#define HUAMANB_HPP

class HumanB {

	private:

	std::string name;
	Weapon* weapon;

	public:
	HumanB(std::string name);
	~HumanB();

	void	attack();
	void setWeapon(Weapon& weapon);

};

#endif