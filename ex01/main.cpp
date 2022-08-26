#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap barry("Barry");
	ClapTrap venkman;



	barry.attack(venkman.getName());
	venkman.beRepaired(0);
	venkman.attack(barry.getName());
	barry.beRepaired(0);
	std::cout << "Barry's hitpoints: " << barry.getHitpoints() << std::endl;
	std::cout << "Venkman's hitpoints: " << venkman.getHitpoints() << std::endl;

	return (0);
}