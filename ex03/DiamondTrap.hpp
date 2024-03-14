#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include <iostream>
#include <string>
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{

public :

    DiamondTrap(std::string name);
    DiamondTrap(DiamondTrap const & copy);
    ~DiamondTrap(void);

    DiamondTrap & operator =(DiamondTrap const & src);

    void whoAmI(void); 

private :

    std::string _name;

};

#endif