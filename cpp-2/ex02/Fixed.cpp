#include "Fixed.hpp"

Fixed::Fixed() {
	this->_fixedValue = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &var) {
	std::cout << "Copy constructor called" << std::endl;
	*this = var;
}

Fixed::Fixed(const int fixed) {
	std::cout << "Int constructor called" << std::endl;
	setRawBits(fixed << this->_bits);
}

Fixed::Fixed(const float fixed) {
	std:: cout << "Float constructor called" << std::endl;
	setRawBits(roundf(fixed * (1 << this->_bits)));
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits() const {
	return (this->_fixedValue);
}

void Fixed::setRawBits(int const raw) {
	this->_fixedValue = raw;
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

Fixed& Fixed::operator =(const Fixed &var) {
	std::cout << "Assignation operation called" << std::endl;
	this->_fixedValue = var.getRawBits();
	return *this;
}

Fixed& Fixed::min(Fixed &var1, Fixed &var2) {
	if (var1 < var2)
		return (var1);
	return (var2);
}

Fixed const & Fixed::min(Fixed const &var1, Fixed const &var2) {
	if (var1 > var2)
		return (var1);
	return (var2);
}

Fixed& Fixed::max(Fixed &var1, Fixed &var2) {
	if (var1 > var2)
		return (var1);
	return (var2);
}

Fixed const & Fixed::max(Fixed const &var1, Fixed const &var2) {
	if (var1 > var2)
		return (var1);
	return (var2);
}

bool Fixed::operator <(Fixed const &var) const{
	return (this->_fixedValue < var._fixedValue);
}

bool Fixed::operator >(Fixed const &var) const{
	return (this->_fixedValue > var._fixedValue);
}

bool Fixed::operator >=(Fixed const &var) const{
	return (this->_fixedValue >= var._fixedValue);
}

bool Fixed::operator <=(Fixed const &var) const{
	return (this->_fixedValue <= var._fixedValue);
}

bool Fixed::operator !=(Fixed const &var) const{
	return (this->_fixedValue != var._fixedValue);
}

Fixed Fixed::operator +(Fixed const &var) const {
	float x = this->toFloat() + var.toFloat();
	return (Fixed(x));
}

Fixed Fixed::operator -(Fixed const &var) const {
	float x = this->toFloat() - var.toFloat();
	return (Fixed(x));
}

Fixed Fixed::operator *(Fixed const &var) const {
	float x = this->toFloat() * var.toFloat();
	return (Fixed(x));
}

Fixed Fixed::operator /(Fixed const &var) const {
	float x = this->toFloat() / var.toFloat();
	return (Fixed(x));
}

Fixed& Fixed::operator ++(void) {
	this->_fixedValue++;
	return (*this);
}

Fixed& Fixed::operator --(void) {
	this->_fixedValue--;
	return (*this);
}

Fixed Fixed::operator ++(int) {
	Fixed buf(*this);

	this->_fixedValue++;
	return (buf);
}

Fixed Fixed::operator --(int) {
	Fixed buf(*this);

	this->_fixedValue--;
	return (buf);
}

