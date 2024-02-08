#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap 
{
	private:
	
	public:
		// Constructeurs && destructeur
		ScavTrap();
		ScavTrap(std::string name);
		~ScavTrap();

		// Méthodes
		void guardGate();



};

#endif