#include <iostream>
#include "fader.hpp"

int main()
{
	Start:
	std::cout << "Set the transparency: ";
	int t;
	std::cin >> t;
	std::cout << "\n";
	SetTransparency(t);
	goto Start;
}