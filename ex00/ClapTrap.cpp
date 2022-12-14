#include "ClapTrap.hpp"

ClapTrap::ClapTrap (void)
{
	std::cout << "Default constructor called" << std::endl;
	this->name = "Marvin";
	this->hitPoints = 10;
	this->energyPoints = 10;
	this->attackDamage = 0;
};

ClapTrap::ClapTrap (std::string name)
{
	std::cout << "Name assignement constructor called" << std::endl;
	this->name = name;
	this->hitPoints = 10;
	this->energyPoints = 10;
	this->attackDamage = 0;
};

ClapTrap::ClapTrap (const ClapTrap& clap)
{
	std::cout << "Copy constructor called" << std::endl;
	this->name = clap.name;
	this->hitPoints = clap.hitPoints;
	this->energyPoints = clap.energyPoints;
	this->attackDamage = clap.attackDamage;
};

ClapTrap::~ClapTrap ()
{
	std::cout << "default destructor called" << std::endl;
};

ClapTrap ClapTrap::operator= (const ClapTrap& clap)
{
	ClapTrap newClap;
	newClap.name = clap.name;
	newClap.hitPoints = clap.hitPoints;
	newClap.energyPoints = clap.energyPoints;
	newClap.attackDamage = clap.attackDamage;
	return (newClap);
};

std::string ClapTrap::getName () const
{
	return (this->name);
};

void ClapTrap::setName (std::string name)
{
	this->name = name;
};

void ClapTrap::attack (const std::string& target)
{
	std::cout << "Claptrap " << this->name << " attacks " << target << ", causing " << this->attackDamage << " points of damage!" << std::endl;
	this->energyPoints--;
};

void ClapTrap::takeDamage (unsigned int amount)
{
	std::cout << "Claptrap " << this->name << " receives" << amount << " points of damage!" << std::endl;
	this->hitPoints -= amount;
};

void ClapTrap::beRepaired (unsigned int amount)
{
	std::cout << "Claptrap " << this->name << " repairs " << amount << " points of damage!" << std::endl;
	this->hitPoints += amount;
};

int ClapTrap::getHitpoints () const
{
	return (this->hitPoints);
};