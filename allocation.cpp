#include <iostream>

/*
	In C++, dynamic memory allocation allows you to allocate memory for variables or data structures at runtime rather than at compile time. This is done using the new operator to allocate memory on the heap and the delete operator to deallocate the memory when it is no longer needed
*/
int main()
{
	std::size_t	*size = new std::size_t;

	*size = 5;
	int	*intArr = new int[*size];
	for (size_t i = 0; i < *size; i++)
		intArr[i] = i * 10;
	
	for (size_t i = 0; i < *size; i++)
		std::cout << "[" << i << "] " << intArr[i] << std::endl;
	delete	size;
	delete[]	intArr;
	return (0);
}