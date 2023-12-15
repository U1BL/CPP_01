#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap()
{
    std::cout << "FragTrap default constructor called" << std::endl;
    this->Name = "Default";
    this->HitPoints = 100;
    this->EnergyPoints = 100;
    this->AttackDamage = 30;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    std::cout << "FragTrap parameter constructor called" << std::endl;
    this->Name = name;
    this->HitPoints = 100;
    this->EnergyPoints = 100;
    this->AttackDamage = 30;
}

FragTrap::FragTrap(const FragTrap& copy) : ClapTrap(copy)
{
    std::cout << "FragTrap copy constructor called" << std::endl;
    *this = copy;
}

FragTrap::~FragTrap(void)
{
    std::cout << "FragTrap destructor called" << std::endl;
}

FragTrap&	FragTrap::operator=(const FragTrap& copy)
{
    std::cout << "FragTrap assignation operator called" << std::endl;
    this->Name = copy.Name;
    this->HitPoints = copy.HitPoints;
    this->EnergyPoints = copy.EnergyPoints;
    this->AttackDamage = copy.AttackDamage;
    return (*this);
}

void	FragTrap::attack(std::string const& target)
{
    std::cout << "FragTrap " << this->Name << " attack " << target << ", causing " << this->AttackDamage << " points of damage!" << std::endl;
}

void	FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << this->Name << " wants to high five" << std::endl;
}

int     FragTrap::getAttackDamage(void)
{
    return (this->AttackDamage);
}