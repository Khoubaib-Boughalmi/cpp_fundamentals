#include "cylinder.h"

Cylinder::Cylinder (double radius_val, double height_val)
{
    radius = radius_val;
    height = height_val;
}

double Cylinder::get_radius()
{
    return radius;
}

double Cylinder::get_height()
{
    return height;
}

void Cylinder::set_radius(double new_radius)
{
    radius = new_radius;
}

void Cylinder::set_height(double new_height)
{
    height = new_height;
}

double Cylinder::volume()
{
    return PI * radius * radius * height;
}
