#include <iostream>
#include <string>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	// Declaration
	std::cout << std::endl;
	std::cout << "\033[32m##################################\033[0m" << std::endl;
	ClapTrap joshep("joshep");
	ClapTrap samuel("samuel");
	ScavTrap fred("fred");
	std::cout << std::endl;
	std::cout << std::endl;

	//Etas de depart
	std::cout << "##################################" << std::endl;
	joshep.getHitPoint();
	joshep.getEnergyPoint();
	std::cout << "----------------------------------" << std::endl;
	samuel.getHitPoint();
	samuel.getEnergyPoint();
	std::cout << "----------------------------------" << std::endl;
	fred.getHitPoint();
	fred.getEnergyPoint();
	std::cout << std::endl;
	std::cout << std::endl;

	//Actions
	std::cout << "##################################" << std::endl;
	joshep.attack("samuel");
	samuel.takeDamage(joshep.getAttackDamage());
	fred.attack("joseph");
	joshep.takeDamage(fred.getAttackDamage());
	fred.guardGate();
	std::cout << std::endl;
	std::cout << std::endl;

	//Etas apres actions
	std::cout << "##################################" << std::endl;
	joshep.getHitPoint();
	joshep.getEnergyPoint();
	std::cout << "----------------------------------" << std::endl;
	samuel.getHitPoint();
	samuel.getEnergyPoint();
	std::cout << "----------------------------------" << std::endl;
	fred.getHitPoint();
	fred.getEnergyPoint();
	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << "\033[31m##################################\033[0m" << std::endl;


	return (0);
}
/*
When ClapTrack attacks, it causes its target to lose <attack damage> hit points.

When ClapTrap repairs itself, it gets <amount> hit points back. Attacking and repairing cost 1 energy point each.

Of course, ClapTrap can’t do anything if it has no hit points or energy points left.
5
*/