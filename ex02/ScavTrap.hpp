#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
	public:
	ScavTrap ();
	ScavTrap(std::string name);
	ScavTrap (ScavTrap &scav);
	ScavTrap operator= (const ScavTrap& scav);
	~ScavTrap ();
	void attack (std::string target);
	void guardGate ();
};