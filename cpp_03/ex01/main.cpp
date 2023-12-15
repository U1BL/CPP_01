#include "ScavTrap.hpp"

int main(void)
{
    ScavTrap scav("Scav");

    scav.attack("target");
    scav.takeDamage(10);
    scav.beRepaired(10);
    scav.guardGate();
    return (0);
}