#include <iostream>
#include "../constants.h"

class Cylinder {
	public :
		Cylinder ()
		{
			radius = 5.0;
			height = 5.5;
		}
		Cylinder (double radius_val, double height_val)
		{
			radius = radius_val;
			height = height_val;
		}
        double get_radius()
        {
            return radius;
        }
        double get_height()
        {
            return height;
        }
        void set_radius(double new_radius)
        {
            radius = new_radius;
        }
        void set_height(double new_height)
        {
            height = new_height;
        }
		double volume()
		{
			return PI * radius * radius * height;
		}
	// Members variables
	private :
		double	radius {1.0};
		double	height {2.5};
	//Methods/functions
};	

int main()
{
    //create class through heap allocation
	Cylinder *myCylinder = new Cylinder(10, 25);
	std::cout << "Default Volume: " << myCylinder->volume() << std::endl;
	std::cout << "Height: " << myCylinder->get_height() << std::endl;
	std::cout << "Radius: " << myCylinder->get_radius() << std::endl;
    myCylinder->set_height(1.1);
    myCylinder->set_radius(2.3);
	std::cout << "New Volume: " << myCylinder->volume() << std::endl;
    delete myCylinder; //prevent memory leak
	return (0);
}