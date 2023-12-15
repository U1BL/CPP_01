#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
    private:
    int _value;
    static const int _bits = 8;

    public:
    Fixed(); // Default constructor
    Fixed(const int value); // Int constructor
    Fixed(const float value); // Float constructor
    Fixed(const Fixed& fixed); // Copy constructor
    ~Fixed(); // Destructor

    Fixed& operator=(const Fixed& fixed); // Copy assignment operator

    int getRawBits(void) const; // Returns the raw value of the fixed point value
    void setRawBits(int const raw); // Sets the raw value of the fixed point value
    float toFloat(void) const; // Converts the fixed point value to a floating point value
    int toInt(void) const; // Converts the fixed point value to an integer value

};

std::ostream& operator<<(std::ostream& os, const Fixed& Fixed); // Output operator
#endif
