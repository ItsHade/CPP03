#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap {

public :

    ClapTrap(std::string name);
    ClapTrap(ClapTrap const & src);
    ~ClapTrap(void);

    ClapTrap & operator =(ClapTrap const & src);

    void attack(const std::string & target);
    void takeDamage(unsigned int amout);
    void beRepaired(unsigned int amout);

private :

    std::string _name;
    unsigned int _hitPoints;
    unsigned int _energyPoints;
    unsigned int _attackDamage;

};

#endif
