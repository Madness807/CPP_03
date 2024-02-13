#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap {
	private:
		std::string name;
		unsigned int hitPoint;
		unsigned int energyPoint;
		unsigned int attackDamage;
		
	public:
		// Constructeurs par defaut
		ClapTrap();
		// Constructeur par copie
		ClapTrap(std::string name);
		// Desctructeur
		~ClapTrap();

		// Méthodes
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

		//Getters
		unsigned int getEnergyPoint();
		unsigned int getHitPoint();
		unsigned int getAttackDamage();

};

#endif