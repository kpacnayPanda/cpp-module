#ifndef FIXED_HPP
#define FIXED_HPP

class Fixed {
	public:
		Fixed(void);
		Fixed(const Fixed &var);
		~Fixed(void);
		Fixed & operator=(Fixed const &var);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
	private:
		int					_fixedValue;
		const static int	_bits = 8;
};

#endif
