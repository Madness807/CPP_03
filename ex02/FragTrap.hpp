#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap 
{
	private:
	
	public:
		// Constructeurs && destructeur
		FragTrap();
		FragTrap(std::string name);
		~FragTrap();

		// Méthodes
		void highFivesGuys();



};

#endif