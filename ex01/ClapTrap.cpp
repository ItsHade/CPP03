#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(100), _energyPoints(50), _attackDamage(20)
{
    std::cout << "ClapTrap Constructor called for " << _name << std::endl;
    return ;
}

ClapTrap::ClapTrap(ClapTrap const & src)
{
    std::cout << "ClapTrap Copy Constructor called" << std::endl;
    *this = src;
    return ;
}

ClapTrap::~ClapTrap(void)
{
    std::cout << "ClapTrap Destructor called" << std::endl;
    return ;
}

ClapTrap & ClapTrap::operator =(ClapTrap const & src)
{
    std::cout << "ClapTrap Assignation operator called" << std::endl;
    this->_name = src._name;
    this->_hitPoints = src._hitPoints;
    this->_energyPoints = src._hitPoints;
    this->_attackDamage = src._attackDamage;
    return (*this);
}

void ClapTrap::attack(const std::string & target)
{
    if (_hitPoints < 1 || _energyPoints < 1)
    {
        std::cout << "ClapTrap " << _name << " is not able to attack!" << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
    _energyPoints--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (_hitPoints < 1)
    {
        std::cout << "ClapTrap " << _name << " is already dead!" << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << _name << " took " << amount << " damages!" << std::endl;
    if (static_cast<int>(_hitPoints - amount) < 0)
        _hitPoints = 0;
    else
        _hitPoints -= amount;
    return ;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (_hitPoints < 1 || _energyPoints < 1)
    {
        std::cout << "ClapTrap " << _name << " is not able to repair itself!" << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << _name << " repaired " << amount << " hit points!" << std::endl;
    _hitPoints += amount;
    _energyPoints--;
    return ;
}
