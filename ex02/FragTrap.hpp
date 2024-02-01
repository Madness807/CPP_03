#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap 
{
	public:
		// Constructeurs && destructeur
		FragTrap();
		FragTrap(std::string name);
		~FragTrap();

		// Méthodes
		void highFivesGuys();


	private:

};

#endif