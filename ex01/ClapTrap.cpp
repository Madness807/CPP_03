#include "ClapTrap.hpp"

//Methodes//////////////////////////////////////////////////////////////////////
void ClapTrap::attack(const std::string &target){

	std::cout << "[ClapTrap] " << name << ": attacks " << target <<", causing " << attackDamage << " points of damage!" << std::endl;
	if(this->energyPoint == 0){
		std::cout << "Do nothing, no energy point" << std::endl;
		return;
	}
	energyPoint--;
}
void ClapTrap::takeDamage(unsigned int amount){

	if (amount >= hitPoint){
		std::cout << name << "\033[33m is dead\033[0m" << std::endl;
		hitPoint = 0;
		return;
	}
	std::cout << "[ClapTrap] " << name << ": take " << amount <<" damage " << std::endl;
	hitPoint -= amount;//a revoir
}
void ClapTrap::beRepaired(unsigned int amount){
	
	if (this->energyPoint < 1){
		std::cout << "Pas assez de point d energie pour se reparer" << std::endl;
		return;
	}
	std::cout << "[ClapTrap] " << name << "Repairs itself "<< std::endl;
	hitPoint = amount;
	energyPoint--;
}



//Getters///////////////////////////////////////////////////////////////////////
unsigned int ClapTrap::getEnergyPoint()
{
	std::cout << "Niveau energetique de " << name << " = " << energyPoint << std::endl;
	return energyPoint;
}
unsigned int ClapTrap::getHitPoint()
{
	std::cout << "Niveau de vie de " << name << " = " << hitPoint << std::endl;
	return hitPoint;
}
unsigned int ClapTrap::getAttackDamage()
{
	return attackDamage;
}



//Constructeur && Destructeur///////////////////////////////////////////////////
ClapTrap::ClapTrap(){
	std::cout << "Activation constructeur" << std::endl;
}

ClapTrap::ClapTrap(std::string name) {
	this->name = name;
	hitPoint = 10;
	energyPoint = 10;
	attackDamage = 0;
	std::cout << "\033[32mConstruction [ClapTrap] \033[0m" << name << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout << "\033[31mDestruction de [ClapTrap] \033[0m" << name << std::endl;
}
