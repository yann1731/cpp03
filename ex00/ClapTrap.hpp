#pragma once
#include <iostream>
#include <string>

class ClapTrap
{
	public:
	ClapTrap ();
	ClapTrap (std::string name);
	ClapTrap (const ClapTrap& claptrap);
	~ClapTrap ();
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	std::string getName(void);
	void setName(std::string name);
	int getHitpoints (void);

	private:
	std::string name;
	int hitPoints;
	int energyPoints;
	int	attackDamage;
};