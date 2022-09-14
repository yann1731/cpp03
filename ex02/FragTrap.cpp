#include "FragTrap.hpp"

FragTrap::FragTrap ()
{
	std::cout << "fragtrap default constructor called" << std::endl;
	this->setHitpoints(100);
	this->setEnergyPoints(100);
	this->setAttackDamage(30);
};

FragTrap::FragTrap (std::string name)
{
	std::cout << "fragtrap name constructor called" << std::endl;
	this->setName(name);
	this->setHitpoints(100);
	this->setEnergyPoints(100);
	this->setAttackDamage(30);
};

FragTrap::FragTrap (FragTrap& frag)
{
	std::cout << "fragtrap copy constructor called" << std::endl;
	this->setName(frag.getName());
	this->setHitpoints(frag.getHitpoints());
	this->setEnergyPoints(frag.getEnergyPoints());
	this->setAttackDamage(frag.getAttackDamage());
};

FragTrap FragTrap::operator= (const FragTrap& frag)
{
	FragTrap newFrag;

	newFrag.setName(frag.getName());
	newFrag.setHitpoints(frag.getHitpoints());
	newFrag.setEnergyPoints(frag.getEnergyPoints());
	newFrag.setAttackDamage(frag.getAttackDamage());
	return (newFrag);
};

FragTrap::~FragTrap ()
{
	std::cout << "Fragtrap default destructor called" << std::endl;
}

void FragTrap::highFiveGuys ()
{
	std::cout << "High five bruh!" << std::endl;
};