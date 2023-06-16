# ifndef DESTRUCTORS_H
# define DESTRUCTORS_H

#include <iostream>
#include "../../constants.h"

class Dog {
	public :
        //constructors
		Dog () = default;
		Dog (std::string *name, int age, int serialNumber);
        //destructor
		~Dog ();
	    //Methods/functions
        std::string get_name();
        int         get_age();
        int         get_serialNumber();
        void        set_name(std::string *new_name);
        void        set_age(int new_age);
        void        set_serialNumber(int new_serialNumber);
	// Members variables
	private :
		std::string *name {nullptr};
		int         age {};
		int         *serialNumber {nullptr};
};	

int main()
{
	Dog myDog;
    std::string name = "Poopy";
    myDog.set_name(&name);
    myDog.set_age(3);
	std::cout << "name: " << myDog.get_name() << std::endl;
	std::cout << "age: " << myDog.get_age() << std::endl;
    name += "Peepee";
    myDog.set_name(&name);
	std::cout << "name: " << myDog.get_name() << std::endl;
	std::cout << "last but not least" << std::endl;
	return (0);
}

# endif