#include "ClapTrap.hpp"

int main ()
{
    ClapTrap claptrap("Claptrap");

    claptrap.attack("Handsome Jack");
    claptrap.takeDamage(5);
    claptrap.beRepaired(5);

    return (0);
}