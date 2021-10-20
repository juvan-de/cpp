#ifndef CLAP_TRAP_HPP
# define CLAP_TRAP_HPP
# include <string>
# include <iostream>

class	ClapTrap
{
	protected:

	std::string			_name;
	unsigned int		_hitpoints;
	unsigned int		_attackDamage;
	unsigned int 		_energyPoints;
	ClapTrap();

	public:

	ClapTrap(std::string name);
	ClapTrap(const ClapTrap& ref);
	ClapTrap& operator=(const ClapTrap& ref);
	virtual ~ClapTrap();

	void attack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};

#endif
