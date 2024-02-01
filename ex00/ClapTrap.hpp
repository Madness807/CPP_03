#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap {
	public:
		// Constructeurs && destructeur
		ClapTrap();
		ClapTrap(std::string name);
		~ClapTrap();

		// Méthodes
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

		//Getters
		unsigned int getEnergyPoint();
		unsigned int getHitPoint();
		unsigned int getAttackDamage();

	private:
		std::string name;
		unsigned int hitPoint;
		unsigned int energyPoint;
		unsigned int attackDamage;
};

#endif