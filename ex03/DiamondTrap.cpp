#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : ScavTrap(name), FragTrap(name)
{
    std::cout << "DiamondTrap Constructor called for " << name << std::endl;
    ClapTrap::_name = name + "_clap_name";
    this->_name = name;
    this->_hitPoints = FragTrap::_hitPoints;
    this->_energyPoints = ScavTrap::_energyPoints;
    this->_attackDamage = FragTrap::_attackDamage;
    return ;
}

DiamondTrap::DiamondTrap(DiamondTrap const & copy) : ScavTrap(copy), FragTrap(copy)
{
    std::cout << "DiamonTrap Copy Constructor called" << std::endl;
    *this = copy;
    return ;
}

DiamondTrap::~DiamondTrap(void)
{
    std::cout << "DiamondTrap Destructor called" << std::endl;
    return ;
}

DiamondTrap & DiamondTrap::operator =(DiamondTrap const & src)
{
    std::cout << "DiamondTrap Assignation operator called" << std::endl;
	this->_name = src._name;
	this->_hitPoints = src._hitPoints;
	this->_energyPoints = src._energyPoints;
	this->_attackDamage = src._attackDamage;
	return (*this);
}

void DiamondTrap::whoAmI(void)
{
    std::cout << _name << " ClapTrap's name is " << ClapTrap::_name << "!" << std::endl;
    return ;
}