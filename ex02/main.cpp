#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
	FragTrap frag;
	FragTrap fragCp(frag);
	FragTrap namedFrag("Egon");
	ClapTrap claptrap("Claptrap");

	std::cout << "frag's name is " << frag.getName() << std::endl;
	std::cout << "fragCp's name is " << fragCp.getName() << std::endl;
	std::cout << "named's name is " << namedFrag.getName() << std::endl;
	std::cout << "claptrap's name is " << claptrap.getName() << std::endl;
	namedFrag.highFiveGuys();
	frag.attack(namedFrag.getName());


	return (0);
}