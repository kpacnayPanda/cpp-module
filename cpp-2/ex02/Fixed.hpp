#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
# include <cmath>

class Fixed {
	public:
		Fixed(const int fixed);
		Fixed(const float fixed);
		Fixed(void);
		Fixed(const Fixed &var);
		~Fixed(void);

		Fixed & operator=(Fixed const &var);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);

		int		toInt(void) const;
		float	toFloat(void) const;
	private:
		int					_fixedValue;
		const static int	_bits = 8;
};

std::ostream & operator<<(std::ostream &src, const Fixed & fixed);

#endif
