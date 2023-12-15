#ifndef SCAV_TRAP_HPP
# define SCAV_TRAP_HPP

# include "ClapTrap.hpp"
# include <string>
# include <iostream>

class ScavTrap : public ClapTrap
{
    private:
        std::string	Name;
        int			HitPoints;
        int			EnergyPoints;
        int			AttackDamage;
    public:
        ScavTrap(void);
        ScavTrap(std::string name);
        ScavTrap(const ScavTrap& copy);
        ~ScavTrap(void);
        ScavTrap&	operator=(const ScavTrap& copy);
        void		attack(std::string const& target);
        void		guardGate(void);
        int         getAttackDamage(void);
};

#endif