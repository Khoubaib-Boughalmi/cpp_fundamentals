#include <iostream>

#define PI 3.14

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
		//Methods/functions
		double volume()
		{
			return PI * radius * radius * height;
		}
	// Members variables
	private :
		double	radius {1.0};
		double	height {2.5};
};	

int main()
{
	Cylinder myCylinder(10, 15);
	std::cout << "Default Volume: " << myCylinder.volume() << std::endl;
	return (0);
}