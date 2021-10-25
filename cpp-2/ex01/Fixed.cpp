#include "Fixed.hpp"

Fixed::Fixed() {
	this->_fixedValue = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &var) {
	std::cout << "Copy constructor called" << std::endl;
	*this = var;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

Fixed & Fixed::operator=(const Fixed &var) {
	std::cout << "Assignation operation called" << std::endl;
	this->_fixedValue = var.getRawBits();
	return *this;
}

int Fixed::getRawBits() const {
	return (this->_fixedValue);
}

void Fixed::setRawBits(int const raw) {
	this->_fixedValue = raw;
}

Fixed::Fixed(const int fixed) {
	std::cout << "Int constructor called" << std::endl;
	setRawBits(fixed << this->_bits);
}

Fixed::Fixed(const float fixed) {
	std:: cout << "Float constructor called" << std::endl;
	setRawBits(roundf(fixed * (1 << this->_bits)));
}

float Fixed::toFloat() const {
	return (float(this->_fixedValue) / float(1 << this->_bits));
}

int Fixed::toInt() const {
	return (this->_fixedValue >> this->_bits);
}

std::ostream & operator <<(std::ostream &src, const Fixed &fixed) {
	src << fixed.toFloat();
	return (src);
}
