#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : Name("Default"), Hitpoints(10), Energy_points(10), Attack_damage(0)
{
    std::cout <<"ClapTrap constructor called: " << this->Name << std::endl;
}

ClapTrap::ClapTrap(std::string name) : Name(name), Hitpoints(10), Energy_points(10), Attack_damage(0)
{
    this->Name = name;
    std::cout <<"ClapTrap constructor called: " << this->Name << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& copy)
{
    std::cout << "ClapTrap Copy constructor called" << std::endl;
    *this = copy;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap Destructor called" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& copy)
{
    std::cout << "ClapTrap Assignation operator called" << std::endl;
    if (this != &copy)
    {
        this->Name = copy.Name;
        this->Hitpoints = copy.Hitpoints;
        this->Energy_points = copy.Energy_points;
        this->Attack_damage = copy.Attack_damage;
    }
    return (*this);
}

void ClapTrap::attack(std::string const& target)
{
    std::cout << "ClapTrap " << this->Name << " attacks " << target << ", causing " << this->Attack_damage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << "ClapTrap " << this->Name << " takes " << amount << " points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    std::cout << "ClapTrap " << this->Name << " is repaired for " << amount << " points of health!" << std::endl;
}
