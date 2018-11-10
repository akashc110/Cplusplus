#include<iostream>
#include<string>

int main()
{
/*
	{
	std::string s = "a string";
	{
	std::string x = s + ", really";
	std::cout<< s << std::endl;
	}
	std::cout<< x << std::endl;

	}
*/

	std::cout << "What is your name? ";
	std::string name;
	std::cin >> name;

	std::cout << "Hello, " << name 
		<< std::endl << "And what is yours? ";
	std::cin >> name;
	std::cout << "Hello, " << name
		<< "; nice to meet uou too!" << std::endl;

	return 0; 
}
