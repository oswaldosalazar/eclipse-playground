#include <iostream>

void returnNothing()
{
	std::cout << "Hi" << std::endl;
}

int return5()
{
	return 5;
}

int getValueFromUser()
{
	std::cout << "Enter an integer: ";
	int a;
	std::cin >> a;
	return a;
}

int main()
{
	std::cout << return5() << std::endl;
	std::cout << return5() + 2 << std::endl;

	returnNothing();
	return5();

//	std::cout << returnNothing(); // Doesn't compile because returnNothing is void

	int x = getValueFromUser();
	int y = getValueFromUser();

	std::cout << x << " + " << y << " = " << x + y << std::endl;

	return 0;
}
