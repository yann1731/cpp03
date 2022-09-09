#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap
{
	public:
	DiamondTrap ();
	DiamondTrap (const std::string& name);
	DiamondTrap (DiamondTrap& diamond);
	~DiamondTrap ();
	private:
	std::string name;
};