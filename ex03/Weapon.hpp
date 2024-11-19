#include <iostream>
#include <string>

class Weapon
{
	private:
		std::string _type;
	public:
		Weapon(void);
		Weapon(std::string type);
		~Weapon(void);
		std::string const & getType(void);
		void setType(std::string const & newType);
};