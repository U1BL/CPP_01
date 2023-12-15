#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

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

    // Arithmetic operators
    int getRawBits(void) const; // Returns the raw value of the fixed point value
    void setRawBits(int const raw); // Sets the raw value of the fixed point value
    float toFloat(void) const; // Converts the fixed point value to a floating point value
    int toInt(void) const; // Converts the fixed point value to an integer value

    // Comparison operators
    int operator>(const Fixed& fixed) const; 
    int operator<(const Fixed& fixed) const;
    int operator>=(const Fixed& fixed) const;
    int operator<=(const Fixed& fixed) const;
    int operator==(const Fixed& fixed) const;
    int operator!=(const Fixed& fixed) const;

    // Arithmetic operators
    Fixed operator+(const Fixed& fixed) const;
    Fixed operator-(const Fixed& fixed) const;
    Fixed operator*(const Fixed& fixed) const;
    Fixed operator/(const Fixed& fixed) const;

    // Increment and decrement operators
    Fixed& operator++(); // Pre-increment
    Fixed operator++(int); // Post-increment
    Fixed& operator--(); // Pre-decrement
    Fixed operator--(int); // Post-decrement

    // Min and max functions
    static Fixed& min(Fixed& a, Fixed& b);
    static Fixed& max(Fixed& a, Fixed& b);
    static const Fixed& min(const Fixed& a, const Fixed& b);
    static const Fixed& max(const Fixed& a, const Fixed& b);
};

std::ostream& operator<<(std::ostream& os, const Fixed& fixed);

#endif