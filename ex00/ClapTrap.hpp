#pragma once
#include <iostream>
#include <string>

class ClapTrap
{
	public:
	ClapTrap ();
	ClapTrap (std::string name);
	ClapTrap (const ClapTrap& claptrap);
	ClapTrap& operator= (const ClapTrap& clap);
	~ClapTrap ();
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	std::string getName(void) const;
	void setName(std::string name);
	int getHitpoints (void) const;

	private:
	std::string name;
	int hitPoints;
	int energyPoints;
	int	attackDamage;
};