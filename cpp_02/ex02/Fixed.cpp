#include "Fixed.hpp"

Fixed::Fixed() : _value(0) {
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int value) {
    std::cout << "Int constructor called" << std::endl;
    this->_value = value << this->_bits;
}

Fixed::Fixed(const float value) {
    std::cout << "Float constructor called" << std::endl;
    this->_value = roundf(value * (1 << this->_bits));
}

Fixed::Fixed(const Fixed& fixed) {
    std::cout << "Copy constructor called" << std::endl;
    *this = fixed;
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& fixed) {
    std::cout << "Assignation operator called" << std::endl;
    this->_value = fixed.getRawBits();
    return *this;
}

int Fixed::getRawBits(void) const {
    return this->_value;
}

void Fixed::setRawBits(int const raw) {
    this->_value = raw;
}

float Fixed::toFloat(void) const {
    return (float)this->_value / (float)(1 << this->_bits);
}

int Fixed::toInt(void) const {
    return this->_value >> this->_bits;
}

int Fixed::operator>(const Fixed& fixed) const {
    return this->_value > fixed.getRawBits();
}

int Fixed::operator<(const Fixed& fixed) const {
    return this->_value < fixed.getRawBits();
}

int Fixed::operator>=(const Fixed& fixed) const {
    return this->_value >= fixed.getRawBits();
}

int Fixed::operator<=(const Fixed& fixed) const {
    return this->_value <= fixed.getRawBits();
}

int Fixed::operator==(const Fixed& fixed) const {
    return this->_value == fixed.getRawBits();
}

int Fixed::operator!=(const Fixed& fixed) const {
    return this->_value != fixed.getRawBits();
}

Fixed Fixed::operator+(const Fixed& fixed) const {
    return Fixed(this->toFloat() + fixed.toFloat());
}

Fixed Fixed::operator-(const Fixed& fixed) const {
    return Fixed(this->toFloat() - fixed.toFloat());
}

Fixed Fixed::operator*(const Fixed& fixed) const {
    return Fixed(this->toFloat() * fixed.toFloat());
}

Fixed Fixed::operator/(const Fixed& fixed) const {
    return Fixed(this->toFloat() / fixed.toFloat());
}

Fixed& Fixed::operator++() {
    this->_value++;
    return *this;
}

Fixed Fixed::operator++(int) {
    Fixed tmp(*this);
    operator++();
    return tmp;
}

Fixed& Fixed::operator--() {
    this->_value--;
    return *this;
}

Fixed Fixed::operator--(int) {
    Fixed tmp(*this);
    operator--();
    return tmp;
}

Fixed& Fixed::min(Fixed& a, Fixed& b) {
    return a < b ? a : b;
}

Fixed& Fixed::max(Fixed& a, Fixed& b) {
    return a > b ? a : b;
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b) {
    return a < b ? a : b;
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b) {
    return a > b ? a : b;
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed) {
    os << fixed.toFloat();
    return os;
}
