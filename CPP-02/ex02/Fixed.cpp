#include "Fixed.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed() : value(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int value) {
	std::cout << "Int constructor called" << std::endl;
	this->value = value << FRACTIONAL_BITS;
}

Fixed::Fixed(const float value) {
	std::cout << "Float constructor called" << std::endl;
	this->value = roundf(value * (1 << FRACTIONAL_BITS));
}

Fixed::Fixed(const Fixed &other) {
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Fixed &Fixed::operator=(const Fixed &other) {
	std::cout << "Copy assignment operator called" << std::endl;
	this->value = other.getRawBits();
	return (*this);
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits() const {
	return value;
}

void Fixed::setRawBits(int raw) {
	this->value = raw;
}

float	Fixed::toFloat( void ) const {
	return	(float) this->value / (float) (1 << FRACTIONAL_BITS);
}

int	Fixed::toInt( void ) const {
	return	this->value >> FRACTIONAL_BITS;
}

std::ostream &operator<<(std::ostream &os, const Fixed &fixedNb) {
	os << fixedNb.toFloat();
	return os;
}
