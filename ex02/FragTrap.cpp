#include "FragTrap.hpp"

//Methodes
void FragTrap::highFivesGuys(){
	std::cout << "FragTrap " << name << " requests a high five!" << std::endl;
}

//Constructeur && Desctructeur
FragTrap::FragTrap() : ClapTrap("Default_FragTrap"){
	hitPoint = 100;
	energyPoint = 100;
	attackDamage = 30;
	std::cout << "Construction du  DEFAULT [FragTrap]: " << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name){
	hitPoint = 100;
	energyPoint = 100;
	attackDamage = 30;
	std::cout << "\033[32mConstruction [FragTrap] \033[0m" << name << std::endl;
}

FragTrap::~FragTrap(){
	std::cout << "\033[31mDestruction de [FragTrap] \033[0m" << name << std::endl;
}