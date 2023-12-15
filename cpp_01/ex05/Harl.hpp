#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
#include <string>

class Harl {
    private:
    void debug(void);
    void info(void);
    void warning(void);
    void error(void);

    struct Complaint {
        std::string level;
        void (Harl::*complaintFn)();
    };

    public:
    void complain(std::string level);
};

#endif