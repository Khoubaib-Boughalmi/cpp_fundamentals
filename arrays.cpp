#include <iostream>

int main()
{
	int	arr[5] = {1, 2, 3, 4, 5};
	for (size_t i = 0; i < 5; i++)
	{
		std::cout << "enter value #" << i << std::endl;
		std::cin >> arr[i];
	}
	for (size_t i = 0; i < 5; i++)
		std::cout << "hello world " << arr[i] <<std::endl;
	return (0);
}
