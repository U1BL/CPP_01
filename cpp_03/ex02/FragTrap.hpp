#ifndef FRAG_TRAP_HPP
# define FRAG_TRAP_HPP

# include "ClapTrap.hpp"
# include <string>
# include <iostream>
# include "ScavTrap.hpp"

class FragTrap : public ClapTrap // FragTrap inherits from ClapTrap
{
    private:
        std::string	Name;
        int			HitPoints;
        int			EnergyPoints;
        int			AttackDamage;
    public:
        FragTrap(void);
        FragTrap(std::string name);
        FragTrap(const FragTrap& copy);
        ~FragTrap(void);
        FragTrap&	operator=(const FragTrap& copy);
        void		attack(std::string const& target);
        void		highFivesGuys(void);
        int         getAttackDamage(void);
};

#endif