#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {

public :

    ScavTrap(std::string name);
    ScavTrap(ScavTrap const & copy);
    ~ScavTrap(void);

    ScavTrap & operator = (ScavTrap const & src);

    void guardGate(void);
    void attack(const std::string & target);

private :

    bool _guardGateMode;

};

#endif
