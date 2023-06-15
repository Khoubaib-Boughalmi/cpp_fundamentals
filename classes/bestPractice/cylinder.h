# ifndef CYLINDER_H
# define CYLINDER_H

#include <iostream>
#include "../../constants.h"

class Cylinder {
	public :
        //constructors
		Cylinder () = default;
		Cylinder (double radius_val, double height_val);
	    //Methods/functions
        double get_radius();
        double get_height();
        void set_radius(double new_radius);
        void set_height(double new_height);
		double volume();
	// Members variables
	private :
		double	radius {1.0};
		double	height {2.5};
};	

int main()
{
	Cylinder myCylinder;
	std::cout << "Default Volume: " << myCylinder.volume() << std::endl;
	std::cout << "Height: " << myCylinder.get_height() << std::endl;
	std::cout << "Radius: " << myCylinder.get_radius() << std::endl;
    myCylinder.set_height(0.1);
    myCylinder.set_radius(3.0);
	std::cout << "New Volume: " << myCylinder.volume() << std::endl;
	return (0);
}

# endif