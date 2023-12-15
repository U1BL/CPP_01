#include "FragTrap.hpp"

int main (void)
{
    FragTrap    frag("Frag");
    ScavTrap    scav("Scav");

    frag.attack("Scav");
    scav.takeDamage(frag.getAttackDamage());
    scav.attack("Frag");
    frag.takeDamage(scav.getAttackDamage());
    frag.highFivesGuys();
    scav.guardGate();
    return (0);
}