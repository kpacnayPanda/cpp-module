#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
# include <cmath>

class Fixed {
	public:
		Fixed(const int fixed);
		Fixed(const float fixed);
		Fixed(const Fixed &var);
		Fixed(void);
		~Fixed(void);

		Fixed& operator =(Fixed const &var);
		Fixed operator +(Fixed const &var) const;
		Fixed operator -(Fixed const &var) const;
		Fixed operator *(Fixed const &var) const;
		Fixed operator /(Fixed const &var) const;
		Fixed operator ++(int);
		Fixed& operator ++(void);
		Fixed operator --(int);
		Fixed& operator --(void);
		bool operator > (Fixed const &var) const;
		bool operator < (Fixed const &var) const;
		bool operator >= (Fixed const &var) const;
		bool operator <= (Fixed const &var) const;
		bool operator == (Fixed const &var) const;
		bool operator != (Fixed const &var) const;

		static Fixed& min(Fixed &var1, Fixed &var2);
		static Fixed const & min(Fixed const &var1, Fixed const &var2);
		static Fixed& max(Fixed &var1, Fixed &var2);
		static Fixed const & max(Fixed const &var1, Fixed const &var2);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		int		toInt(void) const;
		float	toFloat(void) const;
	private:
		int					_fixedValue;
		const static int	_bits = 8;
};

std::ostream & operator <<(std::ostream &src, const Fixed & fixed);

#endif
