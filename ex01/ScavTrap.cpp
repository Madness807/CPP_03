#include "ScavTrap.hpp"

//Methodes
void ScavTrap::guardGate(){
	std::cout << "[ScavTrap] " << name << " is now in Gate keeper mode." << std::endl;
}

//Constructeur && Desctructeur
ScavTrap::ScavTrap() : ClapTrap(){
	hitPoint = 100;
	energyPoint = 50;
	attackDamage = 20;
	std::cout << "Construction du  DEFAULT [ScavTrap]: " << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name){
	hitPoint = 100;
	energyPoint = 50;
	attackDamage = 20;
	std::cout << "\033[32mConstruction [ScavTrap] \033[0m" << name << std::endl;
}

ScavTrap::~ScavTrap(){
	std::cout << "\033[31mDestruction de [ScavTrap] \033[0m" << name << std::endl;
}
