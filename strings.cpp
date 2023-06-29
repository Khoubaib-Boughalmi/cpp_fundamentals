#include <iostream>
#include <string>

void	concatFun(std::string* strPtr)
{
	*strPtr += " 1337";
}

int main()
{
	std::string name;
	std::string str1 = "hello";
	std::string str2 = "world";
	std::string str3 = str1 + " " + str2; // concatinating
	std::cout << str1 << " " << str2 << std::endl;
	std::cout << str3 << std::endl;
	std::cout << "Enter name:\n";
	std::cout << "str3 length : " << str3.length() << '\n';
	std::cin >> name;
	std::cout << str1 << " " << name << '\n';
	concatFun(&str1);
	std::cout << str1 << '\n';
	return (0);
}
