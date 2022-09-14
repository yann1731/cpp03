#pragma once
#include <iostream>
#include <string>

class ClapTrap
{
	public:
	ClapTrap ();
	ClapTrap (std::string name);
	ClapTrap (const ClapTrap& claptrap);
	ClapTrap operator= (const ClapTrap& clap);
	~ClapTrap ();
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	std::string getName(void) const;
	void setName(std::string name);
	void setHitpoints(unsigned int amount);
	int getHitpoints (void) const;
	void setEnergyPoints(unsigned int amount);
	int getEnergyPoints(void) const;
	void setAttackDamage(unsigned int amount);
	int getAttackDamage(void) const;

	private:
	std::string name;
	int hitPoints;
	int energyPoints;
	int	attackDamage;
};