#ifndef ADDRESS_N_EXISTS
#define ADDRESS_N_EXISTS


#include <string>

class address{
	protected:
		std::string street;
		std::string city;
		std::string state;
		std::string zip;
	public:
		Address();
		void init (std::string street,std::string city,std::string state,std::string zip);
		void printaddress();
}; // end class def

#endif
