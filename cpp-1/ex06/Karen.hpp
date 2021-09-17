#ifndef KAREN_HPP
# define KAREN_HPP

#include <iostream>
#include <string>

class Karen {
	private:
		void debug( void );
		void info( void );
		void warning( void );
		void error( void );
	public:
		int complain( std::string level );
};

typedef struct s_level {
	void (Karen::*f)();
}				t_level;

#endif
