#include "Harl.hpp"

void	Harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger. I really do!" \
		<< std::endl;
}

void	Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didnt put enough bacon in my burger! If you did, I wouldnt be asking for more!" \
		<< std::endl;
}

void	Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. Ive been coming for years whereas you started working here since last month." \
		<< std::endl;
}

void	Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

typedef void (Harl::*HarlMemFn)();

void Harl::complain(std::string level)
{
    Complaint complaints[4] = {
        {"debug", &Harl::debug},
        {"info", &Harl::info},
        {"warning", &Harl::warning},
        {"error", &Harl::error}
    };

    for (int i = 0; i < 4; i++) {
        if (complaints[i].level == level) {
            (this->*complaints[i].complaintFn)();
            return;
        }
    }

    std::cout << "Wrong level" << std::endl;
}
