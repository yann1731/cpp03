#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
	public:
	ScavTrap ();
	ScavTrap(std::string name);
	ScavTrap (ScavTrap &scav);
	ScavTrap operator= (ScavTrap scav);
	~ScavTrap ();
	void attack (const std::string& target);
	void guardGate ();
};