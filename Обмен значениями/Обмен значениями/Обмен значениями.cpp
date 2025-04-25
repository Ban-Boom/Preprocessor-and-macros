#include <iostream>

void swap(int& x, int& y)
{
	int temp = x;
	x = y;
	y = temp;
}

int main(int argc, char** argv)
{
	int a = 6, b = 10;
		std::cout << "a = " << a << ", b = " << b << std::endl;

	swap(a, b);

	std::cout << "a = " << a << ", b = " << b << std::endl;

	return 0;

}