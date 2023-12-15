#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
    std::cout << "ScavTrap default constructor called" << std::endl;
    this->Name = "Scav";
    this->HitPoints = 100;
    this->EnergyPoints = 50;
    this->AttackDamage = 20;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    std::cout << "ScavTrap parameter constructor called" << std::endl;
    this->Name = name;
    this->HitPoints = 100;
    this->EnergyPoints = 50;
    this->AttackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap& copy) : ClapTrap(copy)
{
    std::cout << "ScavTrap copy constructor called" << std::endl;
    *this = copy;
}

ScavTrap::~ScavTrap(void)
{
    std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap&	ScavTrap::operator=(const ScavTrap& copy)
{
    std::cout << "ScavTrap assignation operator called" << std::endl;
    this->Name = copy.Name;
    this->HitPoints = copy.HitPoints;
    this->EnergyPoints = copy.EnergyPoints;
    this->AttackDamage = copy.AttackDamage;
    return (*this);
}

void	ScavTrap::attack(std::string const& target)
{
    std::cout << "ScavTrap " << this->Name << " attack " << target << ", causing " << this->AttackDamage << " points of damage!" << std::endl;
}

void	ScavTrap::guardGate(void)
{
    std::cout << "ScavTrap " << this->Name << " has entered in Gate keeper mode" << std::endl;
}

// $> clang++ -Wall -Wextra -Werror *.cpp -o scavtrap && ./scavtrap | cat -e