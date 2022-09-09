#include "DiamondTrap.hpp"

// Name, which is passed as parameter to a constructor
// •ClapTrap::name (parameter of the constructor + "_clap_name" suffix)
// •Hit points (FragTrap)
// •Energy points (ScavTrap)
// •Attack damage (FragTrap)
// •attack() (Scavtrap)

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