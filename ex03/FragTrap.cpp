#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    std::cout << "FlagTrap Constructor called for " << _name << std::endl;
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
    return ;
}

FragTrap::FragTrap(FragTrap const & copy) : ClapTrap(copy)
{
    std::cout << "FragTrap Copy Constructor called" << std::endl;
    return ;
}

FragTrap::~FragTrap(void)
{
    std::cout << "FragTrap Destructor called" << std::endl;
    return ;
}

FragTrap & FragTrap::operator =(FragTrap const & src)
{
	std::cout << "FragTrap Assignation operator called" << std::endl;
	this->_name = src._name;
	this->_hitPoints = src._hitPoints;
	this->_energyPoints = src._energyPoints;
	this->_attackDamage = src._attackDamage;
	return (*this);
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << _name << ": Guys you want to high five?" << std::endl;
    return ;
}