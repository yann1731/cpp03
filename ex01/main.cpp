#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	ScavTrap scav("Venkman");
	ScavTrap scavB(scav);
	ScavTrap defaultScav;

	std::cout << "Scav is named: " << scav.getName() << std::endl;
	std::cout << "ScavB is named: " << scavB.getName() << std::endl;
	std::cout << "defaultScav is named " << defaultScav.getName() << ", what a loser" << std::endl;
	std::cout << "scav has " << scav.getHitpoints() << "hitpoints" << std::endl;
	std::cout << "scavB has " << scavB.getHitpoints() << "hitpoints" << std::endl;
	std::cout << defaultScav.getName() << " has " << defaultScav.getHitpoints() << "hitpoints" << std::endl;
	scav.attack(defaultScav.getName());
	defaultScav.takeDamage(scav.getAttackDamage());
	std::cout << defaultScav.getName() << " has " << defaultScav.getHitpoints() << " hitpoints left" << std::endl;
	defaultScav.beRepaired(20);
	std::cout << defaultScav.getName() << " has " << defaultScav.getHitpoints() << " hitpoints left and " << defaultScav.getEnergyPoints() << " energy points left" << std::endl;
	std::cout << scav.getName() << " has " << scav.getEnergyPoints() << " energy points left" << std::endl;

	return (0);
}