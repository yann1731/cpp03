#include "ScavTrap.hpp"

ScavTrap::ScavTrap ()
{
	std::cout << "ScavTrap default constructor called" << std::endl;
	this->setHitpoints(100);
	this->setEnergyPoints(50);
	this->setAttackDamage(20);
};

ScavTrap::ScavTrap(std::string name)
{
	std::cout << "ScavTrap name constructor called" << std::endl;
	this->setName(name);
	this->setHitpoints(100);
	this->setEnergyPoints(50);
	this->setAttackDamage(20);
};

ScavTrap::ScavTrap(ScavTrap &scav)
{
	std::cout << "ScavTrap copy constructor called" << std::endl;
	this->setName(scav.getName());
	this->setHitpoints(scav.getHitpoints());
	this->setEnergyPoints(scav.getEnergyPoints());
	this->setAttackDamage(scav.getAttackDamage());
};

ScavTrap::~ScavTrap ()
{
	std::cout << "ScavTrap default destructor called" << std::endl;
};

void ScavTrap::attack (std::string target)
{
	std::cout << "ScavTrap " << this->getName() << " attacks " << target << ", causing " << this->getAttackDamage() << " points of damage!" << std::endl;
	this->setEnergyPoints(this->getEnergyPoints() - 1);
};

void ScavTrap::guardGate ()
{
	std::cout << "ScavTrap " << this->getName() << "is in Gate keeper mode" << std::endl;
};