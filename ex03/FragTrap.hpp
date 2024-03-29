#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{

public :

    FragTrap(std::string name);
    FragTrap(FragTrap const & copy);
    ~FragTrap(void);

    FragTrap & operator =(FragTrap const & src);

    void highFivesGuys(void);

};

#endif