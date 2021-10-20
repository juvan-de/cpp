#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{

}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitpoints(10), _attackDamage(0), _energyPoints(10)
{

}

ClapTrap::ClapTrap(const ClapTrap& ref) : _name(ref._name), _hitpoints(10), _attackDamage(0), _energyPoints(10)
{
	
}

ClapTrap&	ClapTrap::operator=(const ClapTrap& ref)
{
	this->_name = ref._name;
	return (*this);
}

ClapTrap::~ClapTrap()
{

}


void	ClapTrap::attack(std::string const & target)
{
	std::cout << "ClapTrap <" << this->_name << "> attacks <" << target << ">, causing <" << this->_attackDamage << "> points of damage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (amount < this->_hitpoints)
	{
		this->_hitpoints -= amount;
		std::cout << "ClapTrap <" << this->_name << "> takes " << amount << " points of damage and is at " << this->_hitpoints << " HP" << std::endl;
	}
	else
	{
		this->_hitpoints = 0;
		std::cout << "The attack was fatal, ClapTrap is now at 0 HP." << std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	this->_hitpoints += amount;
	std::cout << "ClapTrap <" << this->_name << "> is healed for " << amount << " and is now at " << this->_hitpoints << " HP." << std::endl;
}
