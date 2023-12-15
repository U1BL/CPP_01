#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <cmath>

class ClapTrap
{
    private:
        std::string Name;
        int Hitpoints;
        int Energy_points;
        int Attack_damage;
    public:
        ClapTrap();
        ClapTrap(std::string name);
        ClapTrap(const ClapTrap& copy);
        ~ClapTrap();
        ClapTrap& operator=(const ClapTrap& copy);
        void attack(std::string const& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};

#endif