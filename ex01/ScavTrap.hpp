#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap 
{
	private:
	
	public:
		// Constructeurs
		ScavTrap();

		// constructeur par copie
		ScavTrap(std::string name);

		// destructeur
		~ScavTrap();

		// Méthodes
		void guardGate();

};

#endif