#include "ClapTrap.hpp"

ClapTrap::ClapTrap ()
{
	std::cout << "ClapTrap default constructor called" << std::endl;
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
	std::cout << "ClapTrap copy constructor called" << std::endl;
	this->name = clap.name;
	this->hitPoints = clap.hitPoints;
	this->energyPoints = clap.energyPoints;
	this->attackDamage = clap.attackDamage;
};

ClapTrap::~ClapTrap ()
{
	std::cout << "ClapTrap default destructor called" << std::endl;
};

std::string ClapTrap::getName ()
{
	return (this->name);
};

void ClapTrap::setName (std::string name)
{
	this->name = name;
};

int ClapTrap::getHitpoints ()
{
	return (this->hitPoints);
};

void ClapTrap::setHitpoints (unsigned int amount)
{
	this->hitPoints = amount;
};

int ClapTrap::getEnergyPoints ()
{
	return (this->energyPoints);
};

void ClapTrap::setEnergyPoints (unsigned int amount)
{
	this->energyPoints = amount;
};

int ClapTrap::getAttackDamage ()
{
	return (this->attackDamage);
};

void ClapTrap::setAttackDamage (unsigned int amount)
{
	this->attackDamage = amount;
};

void ClapTrap::attack (const std::string& target)
{
	std::cout << "Claptrap " << this->name << " attacks " << target << ", causing " << this->attackDamage << " points of damage!" << std::endl;
	this->energyPoints--;
};

void ClapTrap::takeDamage (unsigned int amount)
{
	std::cout << this->name << " receives " << amount << " points of damage!" << std::endl;
	this->hitPoints -= amount;
};

void ClapTrap::beRepaired (unsigned int amount)
{
	std::cout << this->name << " repairs " << amount << " points of damage!" << std::endl;
	this->hitPoints += amount;
};