#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap josh("Josh");

    josh.attack("enemy lvl 1");
    josh.takeDamage(3);
    josh.beRepaired(10);
    
    josh.takeDamage(30);
    josh.attack("enemy lvl 1");
    josh.takeDamage(1);
    

    return (0);
}