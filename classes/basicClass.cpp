#include <iostream>

#define PI 3.14

class Cylinder {
	// Members variables
	public :
		double	radius {1.0};
		double	height {2.5};
	//Methods/functions
	public :
		double volume()
		{
			return PI * radius * radius * height;
		}
};	

int main()
{
	Cylinder myCylinder;
	std::cout << "Default Volume: " << myCylinder.volume() << std::endl;
	std::cout << "Update height : " << std::endl;
	std::cin >> myCylinder.height;
	std::cout << "Update radius : " << std::endl;
	std::cin >> myCylinder.radius;
	std::cout << "New Volume: " << myCylinder.volume() << std::endl;
	return (0);
}