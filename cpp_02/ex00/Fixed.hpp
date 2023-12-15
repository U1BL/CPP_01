#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed {
    private:
    int fpv;
    static const int fb;

    public:
    Fixed(); // Default Constructor
    Fixed(const Fixed &src); //Copy Constructor
    Fixed& operator=(const Fixed &rhs); // Assignation operator
    ~Fixed(); // Destructor

    int getRawBits(void) const; // Member function to get raw bits
    void setRawBits(int const raw); // Member function to set raw bits
};

# endif