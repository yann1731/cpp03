#include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{
	public:
	FragTrap ();
	FragTrap (std::string name);
	FragTrap (FragTrap& frag);
	FragTrap& operator= (const FragTrap& frag);
	~FragTrap();
	void highFiveGuys(void);
};